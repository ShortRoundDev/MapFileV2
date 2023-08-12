#include "MapFile.h"
#include "MapFileBaseListener.h"
#include "MapFileParser.h"
#include "MapFileLexer.h"

DLL MF_Map* LoadMapFile(const char* name) {
	antlr4::ANTLRFileStream stream;
	stream.loadFromFile(std::string(name));

	MapFileLexer lexer(&stream);
	antlr4::CommonTokenStream tokens(&lexer);

	MapFileParser parser(&tokens);
	MapFileBaseListener listener;

	auto tree = parser.mapfile();
	antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

	return listener.getMapFile();
}