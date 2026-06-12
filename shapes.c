#include "shapes.h"
#include <math.h> /* for M_PI — link with -lm */

double circle_area(double radius) {
    double pi = 3.14159265;
    return pi * radius * radius; 
}

double rectangle_area(double w, double h) {
    return w * h; 
}