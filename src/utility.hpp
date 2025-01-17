#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>
#include <random>

// C++ std using

using std::make_shared;
using std::shared_ptr;

//Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double() {
    // Returns a random real in [0, 1).
    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator;
    return distribution(generator);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min, max).
    return min + (max - min) * random_double();
}

// Common headers

#include "color.hpp"
#include "interval.hpp"
#include "ray.hpp"
#include "vec3.hpp"

#endif