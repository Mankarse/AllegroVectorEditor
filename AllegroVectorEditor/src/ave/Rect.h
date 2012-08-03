//
//  Rect.h
//  AllegroVectorEditor
//
//  Created by Evan Wallace on 3/08/12.
//  Copyright (c) 2012 Evan Wallace. All rights reserved.
//

#ifndef AllegroVectorEditor__Rect
#define AllegroVectorEditor__Rect

namespace ave{
struct Rect {
    double x;
    double y;
    double width;
    double height;
    
    double getMaxX() const;
    double getMaxY() const;
};
}

#endif /* defined(AllegroVectorEditor__Rect) */
