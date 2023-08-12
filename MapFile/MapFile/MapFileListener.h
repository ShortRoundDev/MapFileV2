
// Generated from .\MapFile.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "MapFileParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MapFileParser.
 */
class  MapFileListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFilename(MapFileParser::FilenameContext *ctx) = 0;
  virtual void exitFilename(MapFileParser::FilenameContext *ctx) = 0;

  virtual void enterMapfile(MapFileParser::MapfileContext *ctx) = 0;
  virtual void exitMapfile(MapFileParser::MapfileContext *ctx) = 0;

  virtual void enterTextureParameters(MapFileParser::TextureParametersContext *ctx) = 0;
  virtual void exitTextureParameters(MapFileParser::TextureParametersContext *ctx) = 0;

  virtual void enterProperty(MapFileParser::PropertyContext *ctx) = 0;
  virtual void exitProperty(MapFileParser::PropertyContext *ctx) = 0;

  virtual void enterVertex(MapFileParser::VertexContext *ctx) = 0;
  virtual void exitVertex(MapFileParser::VertexContext *ctx) = 0;

  virtual void enterFace(MapFileParser::FaceContext *ctx) = 0;
  virtual void exitFace(MapFileParser::FaceContext *ctx) = 0;

  virtual void enterBrush(MapFileParser::BrushContext *ctx) = 0;
  virtual void exitBrush(MapFileParser::BrushContext *ctx) = 0;

  virtual void enterEntity(MapFileParser::EntityContext *ctx) = 0;
  virtual void exitEntity(MapFileParser::EntityContext *ctx) = 0;


};

