#include <iostream>

#include "MapFile.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int main()
{
    MF_Map* map = LoadMapFile("test.map");

    std::cout << "Total items: " << map->totalItems << std::endl;
    for (int i = 0; i < map->totalItems; i++) {
        auto entity = map->items[i];
        std::cout << "  | className: " << entity.classname << std::endl;
        if (entity.hasOrigin) {
            std::cout << "  | origin: (" << entity.origin.x << ", " << entity.origin.y << ", " << entity.origin.z << ")" << std::endl;
        }
        std::cout << "  | Total attr: " << entity.totalAttributes << std::endl;
        for (int j = 0; j < entity.totalAttributes; j++) {
            std::cout << "  *---| " << entity.attributes[j].key << " = " << entity.attributes[j].value << std::endl;
        }
        std::cout << "  | Total brushes: " << map->items[i].totalBrushes << std::endl;
        for (int j = 0; j < entity.totalBrushes; j++) {
            auto brush = entity.brushes[j];
            for (int k = 0; k < brush.totalFaces; k++) {
                std::cout << "  *---| ";
                auto face = brush.faces[k];
                for (int l = 0; l < 3; l++) {
                    std::cout << "(" << face.facePoints[l].x << " " << face.facePoints[l].y << " " << face.facePoints[l].z << ") ";
                }
                std::cout << face.texture << " ";
                std::cout << face.textureParameters.angle << " " << face.textureParameters.offsetX << " " << face.textureParameters.offsetY << " " << face.textureParameters.scaleX << " " << face.textureParameters.scaleY << std::endl;;
            }
        }
    }
}
