//
//  Canvas.h
//  AllegroVectorEditor
//
//  Created by Evan Wallace on 3/08/12.
//  Copyright (c) 2012 Evan Wallace. All rights reserved.
//

#ifndef AllegroVectorEditor__Canvas
#define AllegroVectorEditor__Canvas
#include <vector>
#include "vec/Image.h"
#include "vec/EditedVertex.h"
#include "Rect.h"

namespace ave {
    // The Canvas knows about all points and lines in CANVAS SPACE which need to be drawn
    // The viewport then takes these and performs the actual draw when nessecary.
    class Canvas {
        private:
        std::vector<vec::EditedVertex> verticies;
        
        public:
        void addVertex(vec::EditedVertex const& added);
        
        void clear();
        
        std::vector<vec::EditedVertex> getVerticiesInRect(Rect const& area) const;
    };
}

#endif /* defined(__AllegroVectorEditor__Canvas__) */
