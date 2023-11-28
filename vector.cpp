#include <iostream>
#include <math.h>

#include "vector.h"

vector::vector(int x, int y){
    vector::x = x;
    vector::y = y;
}

void vector::printValue(){
    std::cout << "{x: " << vector::x << ", y: " << vector::y << "}\n";
}

double vector::magnitude(){
    double x = pow(vector::x, 2);
    double y = pow(vector::y, 2);

    return sqrt(x + y);
}

void vector::normalise(){
    double mag = vector::magnitude();
    vector::x = vector::x / mag;
    vector::y = vector::y / mag;
}
