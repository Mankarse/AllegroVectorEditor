#ifndef AllegroVectorEditor__vec__Image
#define AllegroVectorEditor__vec__Image

#include <vector>
#include "Vertex.h"
#include "Line.h"
namespace ave {namespace vec {
class Image {
    private:
    std::vector<Vertex> verticies;
    std::vector<Line> lines;
};
}}
#endif /* defined(AllegroVectorEditor__vec__Image) */
