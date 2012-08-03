//
//  EditedVertex.h
//  AllegroVectorEditor
//
//  Created by Evan Wallace on 3/08/12.
//  Copyright (c) 2012 Evan Wallace. All rights reserved.
//

#ifndef AllegroVectorEditor__EditedVertex
#define AllegroVectorEditor__EditedVertex

#include "Vertex.h"
namespace ave{ namespace vec{
class EditedVertex {
    public:
    EditedVertex(EditedVertex const&) = default;
    EditedVertex& operator=(EditedVertex const&) = default;
    EditedVertex(EditedVertex&&) = default;
    EditedVertex& operator=(EditedVertex&&) = default;
    Vertex point;
    float screenSize;
    Colour colour;
};
}}
#endif /* defined(AllegroVectorEditor__EditedVertex) */
