
// Generated from .\MapFile.g4 by ANTLR 4.13.0


#include "MapFileBaseListener.h"

const std::regex MapFileBaseListener::s_propertyPattern =
    std::regex("\"(.+?)\"\\s+\"(.+?)\"");

const std::regex MapFileBaseListener::s_originPattern =
    std::regex("^(?:(-?[0-9]+(?:\\.[0-9]+)?))\\s+(?:(-?[0-9]+(?:\\.[0-9]+)?))\\s+(?:(-?[0-9]+(?:\\.[0-9]+)?))$");

const std::regex MapFileBaseListener::s_vertexPattern =
    std::regex("\\(\\s*(-?[0-9]+(?:\\.[0-9]+)?)\\s+(-?[0-9]+(?:\\.[0-9]+)?)\\s+(-?[0-9]+(?:\\.[0-9]+)?)\\s*\\)");

const std::regex MapFileBaseListener::s_textureParametersPattern =
    std::regex("(-?[0-9]+(?:\\.[0-9]+)?)\\s+(-?[0-9]+(?:\\.[0-9]+)?)\\s+(-?[0-9]+(?:\\.[0-9]+)?)\\s+(-?[0-9]+(?:\\.[0-9]+)?)\\s+(-?[0-9]+(?:\\.[0-9]+)?)");