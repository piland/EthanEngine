//
// Created by piland on 9/25/2024.
//

#ifndef MATH_H
#define MATH_H

#include <cfloat>
#include <cmath>

/// The number PI defined due to many mathematical equations relying on the constant.
constexpr double PI = 3.14159265359;

// Two dimensional vector
struct Vector2 {
    float x;
    float y;
};

// Two dimensional particle
struct Particle {
    Vector2 position;
    Vector2 velocity;
    float mass;
};

#endif //MATH_H
