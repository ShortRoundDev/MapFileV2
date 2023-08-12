
// Generated from .\MapFile.g4 by ANTLR 4.13.0


#include "MapFileLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MapFileLexerStaticData final {
  MapFileLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MapFileLexerStaticData(const MapFileLexerStaticData&) = delete;
  MapFileLexerStaticData(MapFileLexerStaticData&&) = delete;
  MapFileLexerStaticData& operator=(const MapFileLexerStaticData&) = delete;
  MapFileLexerStaticData& operator=(MapFileLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mapfilelexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MapFileLexerStaticData *mapfilelexerLexerStaticData = nullptr;

void mapfilelexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mapfilelexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(mapfilelexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MapFileLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "COMMENT", "NUM", "SP", "CR", "STR", 
      "FILENAME"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "COMMENT", "NUM", "SP", "CR", "STR", "FILENAME"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,10,77,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,
  	1,4,4,4,34,8,4,11,4,12,4,35,1,5,3,5,39,8,5,1,5,4,5,42,8,5,11,5,12,5,43,
  	1,5,1,5,4,5,48,8,5,11,5,12,5,49,3,5,52,8,5,1,6,4,6,55,8,6,11,6,12,6,56,
  	1,7,1,7,1,7,3,7,62,8,7,1,8,1,8,5,8,66,8,8,10,8,12,8,69,9,8,1,8,1,8,1,
  	9,4,9,74,8,9,11,9,12,9,75,0,0,10,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,1,0,4,2,0,10,10,13,13,1,0,48,57,1,0,34,34,9,0,33,33,35,38,40,
  	43,45,45,48,57,61,61,64,90,94,122,126,126,85,0,1,1,0,0,0,0,3,1,0,0,0,
  	0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,
  	0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,1,21,1,0,0,0,3,23,1,0,0,0,5,25,1,0,0,
  	0,7,27,1,0,0,0,9,29,1,0,0,0,11,38,1,0,0,0,13,54,1,0,0,0,15,61,1,0,0,0,
  	17,63,1,0,0,0,19,73,1,0,0,0,21,22,5,40,0,0,22,2,1,0,0,0,23,24,5,41,0,
  	0,24,4,1,0,0,0,25,26,5,123,0,0,26,6,1,0,0,0,27,28,5,125,0,0,28,8,1,0,
  	0,0,29,30,5,47,0,0,30,31,5,47,0,0,31,33,1,0,0,0,32,34,8,0,0,0,33,32,1,
  	0,0,0,34,35,1,0,0,0,35,33,1,0,0,0,35,36,1,0,0,0,36,10,1,0,0,0,37,39,5,
  	45,0,0,38,37,1,0,0,0,38,39,1,0,0,0,39,41,1,0,0,0,40,42,7,1,0,0,41,40,
  	1,0,0,0,42,43,1,0,0,0,43,41,1,0,0,0,43,44,1,0,0,0,44,51,1,0,0,0,45,47,
  	5,46,0,0,46,48,7,1,0,0,47,46,1,0,0,0,48,49,1,0,0,0,49,47,1,0,0,0,49,50,
  	1,0,0,0,50,52,1,0,0,0,51,45,1,0,0,0,51,52,1,0,0,0,52,12,1,0,0,0,53,55,
  	5,32,0,0,54,53,1,0,0,0,55,56,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,14,
  	1,0,0,0,58,59,5,13,0,0,59,62,5,10,0,0,60,62,5,10,0,0,61,58,1,0,0,0,61,
  	60,1,0,0,0,62,16,1,0,0,0,63,67,5,34,0,0,64,66,8,2,0,0,65,64,1,0,0,0,66,
  	69,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,70,1,0,0,0,69,67,1,0,0,0,70,
  	71,5,34,0,0,71,18,1,0,0,0,72,74,7,3,0,0,73,72,1,0,0,0,74,75,1,0,0,0,75,
  	73,1,0,0,0,75,76,1,0,0,0,76,20,1,0,0,0,10,0,35,38,43,49,51,56,61,67,75,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mapfilelexerLexerStaticData = staticData.release();
}

}

MapFileLexer::MapFileLexer(CharStream *input) : Lexer(input) {
  MapFileLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mapfilelexerLexerStaticData->atn, mapfilelexerLexerStaticData->decisionToDFA, mapfilelexerLexerStaticData->sharedContextCache);
}

MapFileLexer::~MapFileLexer() {
  delete _interpreter;
}

std::string MapFileLexer::getGrammarFileName() const {
  return "MapFile.g4";
}

const std::vector<std::string>& MapFileLexer::getRuleNames() const {
  return mapfilelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MapFileLexer::getChannelNames() const {
  return mapfilelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MapFileLexer::getModeNames() const {
  return mapfilelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MapFileLexer::getVocabulary() const {
  return mapfilelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MapFileLexer::getSerializedATN() const {
  return mapfilelexerLexerStaticData->serializedATN;
}

const atn::ATN& MapFileLexer::getATN() const {
  return *mapfilelexerLexerStaticData->atn;
}




void MapFileLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mapfilelexerLexerInitialize();
#else
  ::antlr4::internal::call_once(mapfilelexerLexerOnceFlag, mapfilelexerLexerInitialize);
#endif
}
