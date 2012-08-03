#ifndef AllegroVectorEditor__vec__Line
#define AllegroVectorEditor__vec__Line
#import "Colour.h"
namespace ave{
namespace vec{
class Line {
    public :
    int startIndex;
    int endIndex;
    float width;
    
    Colour colour;
};
}
}

#endif /* defined(AllegroVectorEditor__vec__Line) */
