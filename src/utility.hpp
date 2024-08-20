#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>


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

// Common headers

#include "color.hpp"
#include "interval.hpp"
#include "ray.hpp"
#include "vec3.hpp"

#endif