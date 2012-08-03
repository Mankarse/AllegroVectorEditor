//
//  Rect.cpp
//  AllegroVectorEditor
//
//  Created by Evan Wallace on 3/08/12.
//  Copyright (c) 2012 Evan Wallace. All rights reserved.
//

#include "Rect.h"
namespace ave {
    double Rect::getMaxX() const {
        return x + width;
    }
    
    double Rect::getMaxY() const {
        return y + height;
    }
}