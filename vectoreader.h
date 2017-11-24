//
//  vectoreader.h
//  Vectors
//
//  Created by Kozak, Luca on 2017. 11. 24..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#ifndef vectoreader_h
#define vectoreader_h
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
    Vector() {
        x=rand()%100;
        y=rand()%100;
        z=rand()%100;
    }
    
    Vector (float xp, float yp, float zp) { /** paraméteres*/
        x = xp;
        y = yp;
        z = zp;
    }
    
    void print () {
        printf("Coordinates of point: x=%.2f, y=%.2f, z=%.2f \n", x, y, z) ;
    }
    
   /** double getlength (double len);
    double Vector::getlength(double) {
        return length * breadth * height;
    }
    
    
      Calculate distance
     
    
    float calcualteDistanceFromOrigin {
        
    };
    float calcualteDistanceFrom(Vector v) {
        double d = vectors[].calculateDistanceFrom(vectors[]);
    };
    */
    
    /**
     * Calculate distance function
     */
   double getlength(Vector v){
       
        double d = sqrt(pow(x-v.x,2) + pow(y - v.y,2) + pow(z-v.z,2));
        return d;
        
    };
    
};


#endif /* vectoreader_h */
