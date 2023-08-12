
// Generated from .\MapFile.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  MapFileParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, COMMENT = 5, NUM = 6, SP = 7, 
    CR = 8, STR = 9, FILENAME = 10
  };

  enum {
    RuleFilename = 0, RuleMapfile = 1, RuleTextureParameters = 2, RuleProperty = 3, 
    RuleVertex = 4, RuleFace = 5, RuleBrush = 6, RuleEntity = 7
  };

  explicit MapFileParser(antlr4::TokenStream *input);

  MapFileParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MapFileParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FilenameContext;
  class MapfileContext;
  class TextureParametersContext;
  class PropertyContext;
  class VertexContext;
  class FaceContext;
  class BrushContext;
  class EntityContext; 

  class  FilenameContext : public antlr4::ParserRuleContext {
  public:
    FilenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILENAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FilenameContext* filename();

  class  MapfileContext : public antlr4::ParserRuleContext {
  public:
    MapfileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> COMMENT();
    antlr4::tree::TerminalNode* COMMENT(size_t i);
    std::vector<EntityContext *> entity();
    EntityContext* entity(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CR();
    antlr4::tree::TerminalNode* CR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MapfileContext* mapfile();

  class  TextureParametersContext : public antlr4::ParserRuleContext {
  public:
    TextureParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextureParametersContext* textureParameters();

  class  PropertyContext : public antlr4::ParserRuleContext {
  public:
    PropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STR();
    antlr4::tree::TerminalNode* STR(size_t i);
    antlr4::tree::TerminalNode *SP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyContext* property();

  class  VertexContext : public antlr4::ParserRuleContext {
  public:
    VertexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VertexContext* vertex();

  class  FaceContext : public antlr4::ParserRuleContext {
  public:
    FaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VertexContext *> vertex();
    VertexContext* vertex(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    FilenameContext *filename();
    TextureParametersContext *textureParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FaceContext* face();

  class  BrushContext : public antlr4::ParserRuleContext {
  public:
    BrushContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CR();
    antlr4::tree::TerminalNode* CR(size_t i);
    std::vector<FaceContext *> face();
    FaceContext* face(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BrushContext* brush();

  class  EntityContext : public antlr4::ParserRuleContext {
  public:
    EntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CR();
    antlr4::tree::TerminalNode* CR(size_t i);
    std::vector<PropertyContext *> property();
    PropertyContext* property(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMENT();
    antlr4::tree::TerminalNode* COMMENT(size_t i);
    std::vector<BrushContext *> brush();
    BrushContext* brush(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EntityContext* entity();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

