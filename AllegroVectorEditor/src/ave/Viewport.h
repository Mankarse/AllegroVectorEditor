//
//  Viewport.h
//  AllegroVectorEditor
//
//  Created by Evan Wallace on 3/08/12.
//  Copyright (c) 2012 Evan Wallace. All rights reserved.
//

#ifndef AllegroVectorEditor__Viewport
#define AllegroVectorEditor__Viewport
#include "Canvas.h"
#include "Rect.h"
#include <allegro5/allegro.h>
namespace ave {
class Viewport {
    private:
    Canvas myCanvas;
    Rect viewSpace;
    
    public:
    void drawToDisplay(ALLEGRO_DISPLAY *disp) const;
};
}

#endif /* defined(__AllegroVectorEditor__Viewport__) */
