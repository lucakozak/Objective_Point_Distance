//
//  Vector.h
//  Vectors
//
//  Created by Kozak, Luca on 2017. 11. 24..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#ifndef Vector_h
#define Vector_h
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
#include <cmath>

using namespace std;

class Vector{
private:
    float x;
    float y;
    float z;
public:
    
    /**
     * Creating random points
     */
    Vector() {
        x=rand()%100;
        y=rand()%100;
        z=rand()%100;
    }
    
    
    /**
     * @param xp point of x coordinate
     * @param yp point of y coordinate
     * @param zp point of z coordinate
     */
    Vector (float xp, float yp, float zp) {
        x = xp;
        y = yp;
        z = zp;
    }
    
    /**
     * Write out the random coordinates of the point (in 3D sapce)
     */
    void print () {
        printf("Coordinates of point: x=%.2f, y=%.2f, z=%.2f \n", x, y, z) ;
    }
    
    
    /**
     * Calculate distance function
     * @param v using in the Pythagorean theorem as a point
     * @return the distance between two points (length)
     */
    
    double getlength(Vector v){
        
        double d = sqrt(pow(x - v.x , 2) + pow(y - v.y , 2) + pow(z - v.z , 2));
        return d;
        
    };
    
};


#endif
