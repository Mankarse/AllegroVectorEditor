//
//  Viewport.cpp
//  AllegroVectorEditor
//
//  Created by Evan Wallace on 3/08/12.
//  Copyright (c) 2012 Evan Wallace. All rights reserved.
//

#include "Viewport.h"
namespace ave {
    Viewport::Viewport(Canvas& newCanvas):
        myCanvas(&newCanvas)
    {
    }
    
    void Viewport::drawToDisplay(ALLEGRO_DISPLAY *disp) const{
        al_draw_line(0, 0, 100, 100, al_map_rgb(255, 0, 0), 3);
    }
}