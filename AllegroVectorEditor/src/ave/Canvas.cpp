//
//  Canvas.cpp
//  AllegroVectorEditor
//
//  Created by Evan Wallace on 3/08/12.
//  Copyright (c) 2012 Evan Wallace. All rights reserved.
//
#define BOOST_RESULT_OF_USE_DECLTYPE
#include "Canvas.h"
#include "boost/range/adaptor/filtered.hpp"
#include "boost/range/algorithm_ext/push_back.hpp"
#include <functional>
namespace ave {

void Canvas::addVertex(vec::EditedVertex const& added)
{
    verticies.push_back(added);
}

void Canvas::clear()
{
    verticies.clear();
}
struct Filter {
Filter(Rect const& area): area(&area){}
bool operator()(vec::EditedVertex const& vert) const {
    bool retV = true;
    retV &= vert.point.xCoord > area->x;
    retV &= vert.point.xCoord < area->getMaxX();
    retV &= vert.point.yCoord > area->y;
    retV &= vert.point.yCoord < area->getMaxY();
    return retV;
}
Rect const* area;
};
std::vector<vec::EditedVertex> Canvas::getVerticiesInRect(Rect const& area) const{
    std::vector<vec::EditedVertex> retV;
    
    boost::push_back(
        retV,
        verticies
        | boost::adaptors::filtered(Filter(area)));
    
    return retV;
}
}