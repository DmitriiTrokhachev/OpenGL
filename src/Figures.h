#ifndef FIGURES_H
#define FIGURES_H

#include <glm.hpp>
#include "Vertex.h"

using namespace glm;

// данные о вершинах
//int triangleVertexCount = 3;
//Vertex triangleVertexes[] = {
    //                ВЕРШИНА                   ЦВЕТ
//    Vertex(vec3(  0.5f, 0.5f,  0.5f),    vec3(0.5f, 0.8f, 0.5f)),
//    Vertex(vec3( -0.5f,  0.5f,  0.5f),   vec3(0.5f, 0.8f, 0.5f)),
//    Vertex(vec3( -0.5f, -0.5f,  0.5f),   vec3(0.5f, 0.8f, 0.5f))
//};
int cubeVertexCount = 36;
Vertex cubeVertexes[] = {
    //                ВЕРШИНА                   ЦВЕТ                    ТЕКСТУРА
    //передняя грань
    Vertex(vec3(  0.5f, 0.5f,   0.5f),   vec3(0.2f, 0.8f, 0.5f), vec2(  0.5f,  0.5f )),
    Vertex(vec3( -0.5f,  0.5f,  0.5f),   vec3(0.2f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3(  0.5f, -0.5f,  0.5f),   vec3(0.2f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),

    Vertex(vec3( -0.5f,  0.5f,  0.5f),   vec3(0.2f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3( -0.5f, -0.5f,  0.5f),   vec3(0.2f, 0.8f, 0.5f), vec2( -0.5f, -0.5f )),
    Vertex(vec3(  0.5f, -0.5f,  0.5f),   vec3(0.2f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),
    //правая грань
    Vertex(vec3(  0.5f,  0.5f,  0.5f),   vec3(0.4f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3(  0.5f, -0.5f,  0.5f),   vec3(0.4f, 0.8f, 0.5f), vec2( -0.5f, -0.5f )),
    Vertex(vec3(  0.5f, -0.5f, -0.5f),   vec3(0.4f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),

    Vertex(vec3(  0.5f,  0.5f,  0.5f),   vec3(0.4f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3(  0.5f, -0.5f, -0.5f),   vec3(0.4f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),
    Vertex(vec3(  0.5f,  0.5f, -0.5f),   vec3(0.4f, 0.8f, 0.5f), vec2(  0.5f,  0.5f )),
    //верхняя грань
    Vertex(vec3( -0.5f,  0.5f,  -0.5f),  vec3(0.6f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3( -0.5f,  0.5f,   0.5f),  vec3(0.6f, 0.8f, 0.5f), vec2( -0.5f, -0.5f )),
    Vertex(vec3(  0.5f,  0.5f,   0.5f),  vec3(0.6f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),

    Vertex(vec3( -0.5f,  0.5f,  -0.5f),  vec3(0.6f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3(  0.5f,  0.5f,   0.5f),  vec3(0.6f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),
    Vertex(vec3(  0.5f,  0.5f,  -0.5f),  vec3(0.6f, 0.8f, 0.5f), vec2(  0.5f,  0.5f )),
    //левая грань
    Vertex(vec3( -0.5f,  0.5f,   0.5f),  vec3(0.8f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3( -0.5f, -0.5f,   0.5f),  vec3(0.8f, 0.8f, 0.5f), vec2( -0.5f, -0.5f )),
    Vertex(vec3( -0.5f, -0.5f,  -0.5f),  vec3(0.8f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),

    Vertex(vec3( -0.5f,  0.5f,   0.5f),  vec3(0.8f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3( -0.5f, -0.5f,  -0.5f),  vec3(0.8f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),
    Vertex(vec3( -0.5f,  0.5f,  -0.5f),  vec3(0.8f, 0.8f, 0.5f), vec2(  0.5f,  0.5f )),
    //задняя грань
    Vertex(vec3( -0.5f,  0.5f,  -0.5f),  vec3(1.0f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3(  0.5f, -0.5f,  -0.5f),  vec3(1.0f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),
    Vertex(vec3(  0.5f,  0.5f,  -0.5f),  vec3(1.0f, 0.8f, 0.5f), vec2(  0.5f,  0.5f )),

    Vertex(vec3( -0.5f,  0.5f,  -0.5f),  vec3(1.0f, 0.8f, 0.5f), vec2( -0.5f,  0.5f )),
    Vertex(vec3( -0.5f, -0.5f,  -0.5f),  vec3(1.0f, 0.8f, 0.5f), vec2( -0.5f, -0.5f )),
    Vertex(vec3(  0.5f, -0.5f,  -0.5f),  vec3(1.0f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),
    //нижняя грань
    Vertex(vec3( -0.5f, -0.5f,   0.5f),  vec3(0.5f, 0.8f, 0.5f), vec2( -0.5f, -0.5f )),
    Vertex(vec3(  0.5f, -0.5f,   0.5f),  vec3(0.5f, 0.8f, 0.5f), vec2(  0.5f, -0.5f )),
    Vertex(vec3(  0.5f, -0.5f,  -0.5f),  vec3(0.5f, 0.8f, 0.5f), vec2(  0.5f,  0.5f )),

    Vertex(vec3( -0.5f, -0.5f,   0.5f),  vec3(0.5f, 0.8f, 0.5f), vec2( -0.5f, -0.5f )),
    Vertex(vec3(  0.5f, -0.5f,  -0.5f),  vec3(0.5f, 0.8f, 0.5f), vec2(  0.5f,  0.5f )),
    Vertex(vec3( -0.5f, -0.5f,  -0.5f),  vec3(0.5f, 0.8f, 0.5f), vec2( -0.5f,  0.5f ))
};
#endif
