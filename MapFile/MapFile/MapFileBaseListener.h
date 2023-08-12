
// Generated from .\MapFile.g4 by ANTLR 4.13.0

#pragma once

#include "MapFileListener.h"

#include <iostream>
#include <regex>

#include "MapFile_Types.h"
#include "antlr4-runtime.h"

/**
 * This class provides an empty implementation of MapFileListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MapFileBaseListener : public MapFileListener {
private:

    static const std::regex s_propertyPattern;
    static const std::regex s_vertexPattern;
    static const std::regex s_textureParametersPattern;
    static const std::regex s_originPattern;

    MF_Map* m_mapFile;

    /* ===== Entities ===== */
    std::vector<MF_Entity> m_entityBuffer;
    MF_Entity_t m_entity;

    /* ===== Properties ===== */
    std::vector<MF_KeyValuePair> m_properties;

    /* ===== Brushes =====*/
    std::vector<MF_Brush> m_brushBuffer;
    MF_Brush m_brush;

    /* ===== Faces ===== */
    std::vector<MF_Face> m_faceBuffer;
    MF_Face m_face;

    /* ===== Vertices ===== */
    int i = 0;
    MF_Vector3 m_vector;

public:

    MF_Map* getMapFile() const {
        return m_mapFile;
    }

    virtual void enterMapfile(MapFileParser::MapfileContext* ctx) override {
        m_mapFile = new MF_Map;
    }


    virtual void exitMapfile(MapFileParser::MapfileContext * /*ctx*/) override {
        m_mapFile->totalItems = m_entityBuffer.size();
        m_mapFile->items = new MF_Entity[m_mapFile->totalItems];

        memcpy_s(
            m_mapFile->items,      sizeof(MF_Entity) * m_mapFile->totalItems,
            m_entityBuffer.data(), sizeof(MF_Entity) * m_mapFile->totalItems
        );

        m_entityBuffer.clear();
    }

    virtual void enterVertex(MapFileParser::VertexContext* ctx) override {
        const auto& vertexString = ctx->getText();

        std::smatch matches;
        if (std::regex_match(vertexString, matches, s_vertexPattern)) {
            std::string xStr = matches[1];
            std::string yStr = matches[2];
            std::string zStr = matches[3];

            m_vector.x = std::stof(xStr),
            m_vector.y = std::stof(yStr),
            m_vector.z = std::stof(zStr);
        }
    }
    virtual void exitVertex(MapFileParser::VertexContext * /*ctx*/) override {
        m_face.facePoints[i++] = m_vector;
    }

    virtual void enterFace(MapFileParser::FaceContext * /*ctx*/) override {
        m_face = { 0 };
        i = 0;
    }

    virtual void exitFace(MapFileParser::FaceContext * /*ctx*/) override {
        m_faceBuffer.push_back(m_face);
    }

    virtual void enterBrush(MapFileParser::BrushContext * /*ctx*/) override {
        m_brush = { 0 };
    }
    virtual void exitBrush(MapFileParser::BrushContext * /*ctx*/) override {
        m_brush.totalFaces = m_faceBuffer.size();
        m_brush.faces = new MF_Face[m_faceBuffer.size()];

        std::copy(m_faceBuffer.begin(), m_faceBuffer.end(), m_brush.faces);
        m_faceBuffer.clear();

        m_brushBuffer.push_back(m_brush);
    }

    virtual void enterProperty(MapFileParser::PropertyContext* ctx) override {
        const auto& propertyString = ctx->getText();

        std::smatch matches;
        if (std::regex_match(propertyString, matches, s_propertyPattern)) {
            std::string propertyName  = matches[1];
            std::string propertyValue = matches[2];

            char* key   = new char[propertyName.length() + 1];
            char* value = new char[propertyValue.length() + 1];

            key[propertyName.length()]    = '\0';
            value[propertyValue.length()] = '\0';

            std::copy(propertyName.begin(),  propertyName.end(),  key);
            std::copy(propertyValue.begin(), propertyValue.end(), value);

            if (propertyName == "classname") {
                m_entity.classname = value;
            }
            else if (propertyName == "origin") {
                std::smatch matches;
                if (std::regex_match(propertyValue, matches, s_originPattern)) {
                    std::string xStr = matches[1];
                    std::string yStr = matches[2];
                    std::string zStr = matches[3];

                    m_entity.origin = { stof(xStr), stof(yStr), stof(zStr) };
                    m_entity.hasOrigin = true;
                }
                else {
                    //warning, your origin is screwed up
                }
            }

            m_properties.push_back({
                .key   = key,
                .value = value
            });
        }
    }
    virtual void exitProperty(MapFileParser::PropertyContext * /*ctx*/) override {
        
    }

    virtual void enterFilename(MapFileParser::FilenameContext* ctx) override {
        std::string const& text = ctx->getText();
        auto size = ctx->getText().length();

        m_face.texture = new char[size + 1];
        m_face.texture[size] = '\0';

        std::copy(text.begin(), text.end(), m_face.texture);
    }
    virtual void exitFilename(MapFileParser::FilenameContext* /*ctx*/) override { }

    virtual void enterTextureParameters(MapFileParser::TextureParametersContext* ctx) override {
        const auto& paramString = ctx->getText();

        std::smatch matches;
        if (std::regex_match(paramString, matches, s_textureParametersPattern)) {
            auto offXStr   = matches[1];
            auto offYStr   = matches[2];
            auto angleStr  = matches[3];
            auto scaleXStr = matches[4];
            auto scaleYStr = matches[5];

            m_face.textureParameters = {
                .offsetX = stof(offXStr),
                .offsetY = stof(offYStr),
                .angle   = stof(angleStr),
                .scaleX  = stof(scaleXStr),
                .scaleY  = stof(scaleYStr)
            };
        }
    }
    virtual void exitTextureParameters(MapFileParser::TextureParametersContext* /*ctx*/) override { }

    virtual void enterEntity(MapFileParser::EntityContext* ctx) override {
        m_entity = { 0 };
    }

    virtual void exitEntity(MapFileParser::EntityContext* /*ctx*/) override {
        /* ----- Copy over properties ----- */
        m_entity.totalAttributes = m_properties.size();
        m_entity.attributes = new MF_KeyValuePair[m_entity.totalAttributes];

        std::copy(m_properties.begin(), m_properties.end(), m_entity.attributes);
        m_properties.clear();

        /* ----- Copy over brushes ----- */
        m_entity.totalBrushes = m_brushBuffer.size();
        m_entity.brushes = new MF_Brush[m_brushBuffer.size()];

        std::copy(m_brushBuffer.begin(), m_brushBuffer.end(), m_entity.brushes);
        m_brushBuffer.clear();

        m_entityBuffer.push_back(m_entity);
    }


    virtual void enterEveryRule(antlr4::ParserRuleContext* ctx) override { }

    virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
    virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
    virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

