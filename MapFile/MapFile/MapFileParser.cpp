
// Generated from .\MapFile.g4 by ANTLR 4.13.0


#include "MapFileListener.h"

#include "MapFileParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MapFileParserStaticData final {
  MapFileParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MapFileParserStaticData(const MapFileParserStaticData&) = delete;
  MapFileParserStaticData(MapFileParserStaticData&&) = delete;
  MapFileParserStaticData& operator=(const MapFileParserStaticData&) = delete;
  MapFileParserStaticData& operator=(MapFileParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mapfileParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MapFileParserStaticData *mapfileParserStaticData = nullptr;

void mapfileParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mapfileParserStaticData != nullptr) {
    return;
  }
#else
  assert(mapfileParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MapFileParserStaticData>(
    std::vector<std::string>{
      "filename", "mapfile", "textureParameters", "property", "vertex", 
      "face", "brush", "entity"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "COMMENT", "NUM", "SP", "CR", "STR", "FILENAME"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,10,109,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,1,0,1,1,1,1,3,1,21,8,1,1,1,4,1,24,8,1,11,1,12,1,25,1,1,1,1,
  	3,1,30,8,1,1,1,3,1,33,8,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,3,1,3,1,3,1,3,1,4,1,4,3,4,53,8,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,61,
  	8,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,
  	6,4,6,80,8,6,11,6,12,6,81,1,6,1,6,1,7,1,7,1,7,1,7,3,7,90,8,7,1,7,4,7,
  	93,8,7,11,7,12,7,94,1,7,1,7,3,7,99,8,7,1,7,5,7,102,8,7,10,7,12,7,105,
  	9,7,1,7,1,7,1,7,0,0,8,0,2,4,6,8,10,12,14,0,0,111,0,16,1,0,0,0,2,23,1,
  	0,0,0,4,36,1,0,0,0,6,46,1,0,0,0,8,50,1,0,0,0,10,64,1,0,0,0,12,74,1,0,
  	0,0,14,85,1,0,0,0,16,17,5,10,0,0,17,1,1,0,0,0,18,21,5,5,0,0,19,21,3,14,
  	7,0,20,18,1,0,0,0,20,19,1,0,0,0,21,22,1,0,0,0,22,24,5,8,0,0,23,20,1,0,
  	0,0,24,25,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,29,1,0,0,0,27,30,5,5,
  	0,0,28,30,3,14,7,0,29,27,1,0,0,0,29,28,1,0,0,0,30,32,1,0,0,0,31,33,5,
  	8,0,0,32,31,1,0,0,0,32,33,1,0,0,0,33,34,1,0,0,0,34,35,5,0,0,1,35,3,1,
  	0,0,0,36,37,5,6,0,0,37,38,5,7,0,0,38,39,5,6,0,0,39,40,5,7,0,0,40,41,5,
  	6,0,0,41,42,5,7,0,0,42,43,5,6,0,0,43,44,5,7,0,0,44,45,5,6,0,0,45,5,1,
  	0,0,0,46,47,5,9,0,0,47,48,5,7,0,0,48,49,5,9,0,0,49,7,1,0,0,0,50,52,5,
  	1,0,0,51,53,5,7,0,0,52,51,1,0,0,0,52,53,1,0,0,0,53,54,1,0,0,0,54,55,5,
  	6,0,0,55,56,5,7,0,0,56,57,5,6,0,0,57,58,5,7,0,0,58,60,5,6,0,0,59,61,5,
  	7,0,0,60,59,1,0,0,0,60,61,1,0,0,0,61,62,1,0,0,0,62,63,5,2,0,0,63,9,1,
  	0,0,0,64,65,3,8,4,0,65,66,5,7,0,0,66,67,3,8,4,0,67,68,5,7,0,0,68,69,3,
  	8,4,0,69,70,5,7,0,0,70,71,3,0,0,0,71,72,5,7,0,0,72,73,3,4,2,0,73,11,1,
  	0,0,0,74,75,5,3,0,0,75,79,5,8,0,0,76,77,3,10,5,0,77,78,5,8,0,0,78,80,
  	1,0,0,0,79,76,1,0,0,0,80,81,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,83,
  	1,0,0,0,83,84,5,4,0,0,84,13,1,0,0,0,85,86,5,3,0,0,86,92,5,8,0,0,87,90,
  	3,6,3,0,88,90,5,5,0,0,89,87,1,0,0,0,89,88,1,0,0,0,90,91,1,0,0,0,91,93,
  	5,8,0,0,92,89,1,0,0,0,93,94,1,0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,103,
  	1,0,0,0,96,99,3,12,6,0,97,99,5,5,0,0,98,96,1,0,0,0,98,97,1,0,0,0,99,100,
  	1,0,0,0,100,102,5,8,0,0,101,98,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,
  	0,103,104,1,0,0,0,104,106,1,0,0,0,105,103,1,0,0,0,106,107,5,4,0,0,107,
  	15,1,0,0,0,11,20,25,29,32,52,60,81,89,94,98,103
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mapfileParserStaticData = staticData.release();
}

}

MapFileParser::MapFileParser(TokenStream *input) : MapFileParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MapFileParser::MapFileParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MapFileParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mapfileParserStaticData->atn, mapfileParserStaticData->decisionToDFA, mapfileParserStaticData->sharedContextCache, options);
}

MapFileParser::~MapFileParser() {
  delete _interpreter;
}

const atn::ATN& MapFileParser::getATN() const {
  return *mapfileParserStaticData->atn;
}

std::string MapFileParser::getGrammarFileName() const {
  return "MapFile.g4";
}

const std::vector<std::string>& MapFileParser::getRuleNames() const {
  return mapfileParserStaticData->ruleNames;
}

const dfa::Vocabulary& MapFileParser::getVocabulary() const {
  return mapfileParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MapFileParser::getSerializedATN() const {
  return mapfileParserStaticData->serializedATN;
}


//----------------- FilenameContext ------------------------------------------------------------------

MapFileParser::FilenameContext::FilenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MapFileParser::FilenameContext::FILENAME() {
  return getToken(MapFileParser::FILENAME, 0);
}


size_t MapFileParser::FilenameContext::getRuleIndex() const {
  return MapFileParser::RuleFilename;
}

void MapFileParser::FilenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilename(this);
}

void MapFileParser::FilenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilename(this);
}

MapFileParser::FilenameContext* MapFileParser::filename() {
  FilenameContext *_localctx = _tracker.createInstance<FilenameContext>(_ctx, getState());
  enterRule(_localctx, 0, MapFileParser::RuleFilename);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    match(MapFileParser::FILENAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapfileContext ------------------------------------------------------------------

MapFileParser::MapfileContext::MapfileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MapFileParser::MapfileContext::EOF() {
  return getToken(MapFileParser::EOF, 0);
}

std::vector<tree::TerminalNode *> MapFileParser::MapfileContext::COMMENT() {
  return getTokens(MapFileParser::COMMENT);
}

tree::TerminalNode* MapFileParser::MapfileContext::COMMENT(size_t i) {
  return getToken(MapFileParser::COMMENT, i);
}

std::vector<MapFileParser::EntityContext *> MapFileParser::MapfileContext::entity() {
  return getRuleContexts<MapFileParser::EntityContext>();
}

MapFileParser::EntityContext* MapFileParser::MapfileContext::entity(size_t i) {
  return getRuleContext<MapFileParser::EntityContext>(i);
}

std::vector<tree::TerminalNode *> MapFileParser::MapfileContext::CR() {
  return getTokens(MapFileParser::CR);
}

tree::TerminalNode* MapFileParser::MapfileContext::CR(size_t i) {
  return getToken(MapFileParser::CR, i);
}


size_t MapFileParser::MapfileContext::getRuleIndex() const {
  return MapFileParser::RuleMapfile;
}

void MapFileParser::MapfileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapfile(this);
}

void MapFileParser::MapfileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapfile(this);
}

MapFileParser::MapfileContext* MapFileParser::mapfile() {
  MapfileContext *_localctx = _tracker.createInstance<MapfileContext>(_ctx, getState());
  enterRule(_localctx, 2, MapFileParser::RuleMapfile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(23); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(20);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case MapFileParser::COMMENT: {
                  setState(18);
                  match(MapFileParser::COMMENT);
                  break;
                }

                case MapFileParser::T__2: {
                  setState(19);
                  entity();
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              setState(22);
              match(MapFileParser::CR);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(25); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MapFileParser::COMMENT: {
        setState(27);
        match(MapFileParser::COMMENT);
        break;
      }

      case MapFileParser::T__2: {
        setState(28);
        entity();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(32);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MapFileParser::CR) {
      setState(31);
      match(MapFileParser::CR);
    }
    setState(34);
    match(MapFileParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextureParametersContext ------------------------------------------------------------------

MapFileParser::TextureParametersContext::TextureParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MapFileParser::TextureParametersContext::NUM() {
  return getTokens(MapFileParser::NUM);
}

tree::TerminalNode* MapFileParser::TextureParametersContext::NUM(size_t i) {
  return getToken(MapFileParser::NUM, i);
}

std::vector<tree::TerminalNode *> MapFileParser::TextureParametersContext::SP() {
  return getTokens(MapFileParser::SP);
}

tree::TerminalNode* MapFileParser::TextureParametersContext::SP(size_t i) {
  return getToken(MapFileParser::SP, i);
}


size_t MapFileParser::TextureParametersContext::getRuleIndex() const {
  return MapFileParser::RuleTextureParameters;
}

void MapFileParser::TextureParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextureParameters(this);
}

void MapFileParser::TextureParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextureParameters(this);
}

MapFileParser::TextureParametersContext* MapFileParser::textureParameters() {
  TextureParametersContext *_localctx = _tracker.createInstance<TextureParametersContext>(_ctx, getState());
  enterRule(_localctx, 4, MapFileParser::RuleTextureParameters);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(MapFileParser::NUM);
    setState(37);
    match(MapFileParser::SP);
    setState(38);
    match(MapFileParser::NUM);
    setState(39);
    match(MapFileParser::SP);
    setState(40);
    match(MapFileParser::NUM);
    setState(41);
    match(MapFileParser::SP);
    setState(42);
    match(MapFileParser::NUM);
    setState(43);
    match(MapFileParser::SP);
    setState(44);
    match(MapFileParser::NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyContext ------------------------------------------------------------------

MapFileParser::PropertyContext::PropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MapFileParser::PropertyContext::STR() {
  return getTokens(MapFileParser::STR);
}

tree::TerminalNode* MapFileParser::PropertyContext::STR(size_t i) {
  return getToken(MapFileParser::STR, i);
}

tree::TerminalNode* MapFileParser::PropertyContext::SP() {
  return getToken(MapFileParser::SP, 0);
}


size_t MapFileParser::PropertyContext::getRuleIndex() const {
  return MapFileParser::RuleProperty;
}

void MapFileParser::PropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProperty(this);
}

void MapFileParser::PropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProperty(this);
}

MapFileParser::PropertyContext* MapFileParser::property() {
  PropertyContext *_localctx = _tracker.createInstance<PropertyContext>(_ctx, getState());
  enterRule(_localctx, 6, MapFileParser::RuleProperty);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(MapFileParser::STR);
    setState(47);
    match(MapFileParser::SP);
    setState(48);
    match(MapFileParser::STR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VertexContext ------------------------------------------------------------------

MapFileParser::VertexContext::VertexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MapFileParser::VertexContext::NUM() {
  return getTokens(MapFileParser::NUM);
}

tree::TerminalNode* MapFileParser::VertexContext::NUM(size_t i) {
  return getToken(MapFileParser::NUM, i);
}

std::vector<tree::TerminalNode *> MapFileParser::VertexContext::SP() {
  return getTokens(MapFileParser::SP);
}

tree::TerminalNode* MapFileParser::VertexContext::SP(size_t i) {
  return getToken(MapFileParser::SP, i);
}


size_t MapFileParser::VertexContext::getRuleIndex() const {
  return MapFileParser::RuleVertex;
}

void MapFileParser::VertexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVertex(this);
}

void MapFileParser::VertexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVertex(this);
}

MapFileParser::VertexContext* MapFileParser::vertex() {
  VertexContext *_localctx = _tracker.createInstance<VertexContext>(_ctx, getState());
  enterRule(_localctx, 8, MapFileParser::RuleVertex);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(MapFileParser::T__0);
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MapFileParser::SP) {
      setState(51);
      match(MapFileParser::SP);
    }
    setState(54);
    match(MapFileParser::NUM);
    setState(55);
    match(MapFileParser::SP);
    setState(56);
    match(MapFileParser::NUM);
    setState(57);
    match(MapFileParser::SP);
    setState(58);
    match(MapFileParser::NUM);
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MapFileParser::SP) {
      setState(59);
      match(MapFileParser::SP);
    }
    setState(62);
    match(MapFileParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FaceContext ------------------------------------------------------------------

MapFileParser::FaceContext::FaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MapFileParser::VertexContext *> MapFileParser::FaceContext::vertex() {
  return getRuleContexts<MapFileParser::VertexContext>();
}

MapFileParser::VertexContext* MapFileParser::FaceContext::vertex(size_t i) {
  return getRuleContext<MapFileParser::VertexContext>(i);
}

std::vector<tree::TerminalNode *> MapFileParser::FaceContext::SP() {
  return getTokens(MapFileParser::SP);
}

tree::TerminalNode* MapFileParser::FaceContext::SP(size_t i) {
  return getToken(MapFileParser::SP, i);
}

MapFileParser::FilenameContext* MapFileParser::FaceContext::filename() {
  return getRuleContext<MapFileParser::FilenameContext>(0);
}

MapFileParser::TextureParametersContext* MapFileParser::FaceContext::textureParameters() {
  return getRuleContext<MapFileParser::TextureParametersContext>(0);
}


size_t MapFileParser::FaceContext::getRuleIndex() const {
  return MapFileParser::RuleFace;
}

void MapFileParser::FaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFace(this);
}

void MapFileParser::FaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFace(this);
}

MapFileParser::FaceContext* MapFileParser::face() {
  FaceContext *_localctx = _tracker.createInstance<FaceContext>(_ctx, getState());
  enterRule(_localctx, 10, MapFileParser::RuleFace);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    vertex();
    setState(65);
    match(MapFileParser::SP);
    setState(66);
    vertex();
    setState(67);
    match(MapFileParser::SP);
    setState(68);
    vertex();
    setState(69);
    match(MapFileParser::SP);
    setState(70);
    filename();
    setState(71);
    match(MapFileParser::SP);
    setState(72);
    textureParameters();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BrushContext ------------------------------------------------------------------

MapFileParser::BrushContext::BrushContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MapFileParser::BrushContext::CR() {
  return getTokens(MapFileParser::CR);
}

tree::TerminalNode* MapFileParser::BrushContext::CR(size_t i) {
  return getToken(MapFileParser::CR, i);
}

std::vector<MapFileParser::FaceContext *> MapFileParser::BrushContext::face() {
  return getRuleContexts<MapFileParser::FaceContext>();
}

MapFileParser::FaceContext* MapFileParser::BrushContext::face(size_t i) {
  return getRuleContext<MapFileParser::FaceContext>(i);
}


size_t MapFileParser::BrushContext::getRuleIndex() const {
  return MapFileParser::RuleBrush;
}

void MapFileParser::BrushContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBrush(this);
}

void MapFileParser::BrushContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBrush(this);
}

MapFileParser::BrushContext* MapFileParser::brush() {
  BrushContext *_localctx = _tracker.createInstance<BrushContext>(_ctx, getState());
  enterRule(_localctx, 12, MapFileParser::RuleBrush);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(MapFileParser::T__2);
    setState(75);
    match(MapFileParser::CR);
    setState(79); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(76);
      face();
      setState(77);
      match(MapFileParser::CR);
      setState(81); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MapFileParser::T__0);
    setState(83);
    match(MapFileParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntityContext ------------------------------------------------------------------

MapFileParser::EntityContext::EntityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MapFileParser::EntityContext::CR() {
  return getTokens(MapFileParser::CR);
}

tree::TerminalNode* MapFileParser::EntityContext::CR(size_t i) {
  return getToken(MapFileParser::CR, i);
}

std::vector<MapFileParser::PropertyContext *> MapFileParser::EntityContext::property() {
  return getRuleContexts<MapFileParser::PropertyContext>();
}

MapFileParser::PropertyContext* MapFileParser::EntityContext::property(size_t i) {
  return getRuleContext<MapFileParser::PropertyContext>(i);
}

std::vector<tree::TerminalNode *> MapFileParser::EntityContext::COMMENT() {
  return getTokens(MapFileParser::COMMENT);
}

tree::TerminalNode* MapFileParser::EntityContext::COMMENT(size_t i) {
  return getToken(MapFileParser::COMMENT, i);
}

std::vector<MapFileParser::BrushContext *> MapFileParser::EntityContext::brush() {
  return getRuleContexts<MapFileParser::BrushContext>();
}

MapFileParser::BrushContext* MapFileParser::EntityContext::brush(size_t i) {
  return getRuleContext<MapFileParser::BrushContext>(i);
}


size_t MapFileParser::EntityContext::getRuleIndex() const {
  return MapFileParser::RuleEntity;
}

void MapFileParser::EntityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntity(this);
}

void MapFileParser::EntityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MapFileListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntity(this);
}

MapFileParser::EntityContext* MapFileParser::entity() {
  EntityContext *_localctx = _tracker.createInstance<EntityContext>(_ctx, getState());
  enterRule(_localctx, 14, MapFileParser::RuleEntity);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(MapFileParser::T__2);
    setState(86);
    match(MapFileParser::CR);
    setState(92); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(89);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case MapFileParser::STR: {
                  setState(87);
                  property();
                  break;
                }

                case MapFileParser::COMMENT: {
                  setState(88);
                  match(MapFileParser::COMMENT);
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              setState(91);
              match(MapFileParser::CR);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(94); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MapFileParser::T__2

    || _la == MapFileParser::COMMENT) {
      setState(98);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MapFileParser::T__2: {
          setState(96);
          brush();
          break;
        }

        case MapFileParser::COMMENT: {
          setState(97);
          match(MapFileParser::COMMENT);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(100);
      match(MapFileParser::CR);
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(106);
    match(MapFileParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void MapFileParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mapfileParserInitialize();
#else
  ::antlr4::internal::call_once(mapfileParserOnceFlag, mapfileParserInitialize);
#endif
}
