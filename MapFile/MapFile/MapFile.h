#pragma once

#include <iostream>

#include "MapFile_Types.h"
#include "MapFileDll.h"

extern "C" {
	DLL MF_Map* LoadMapFile(const char* name);
}