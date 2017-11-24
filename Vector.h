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
     * Random pontok létrehozása
     */
    Vector() {
        x=rand()%100;
        y=rand()%100;
        z=rand()%100;
    }
    
    
    /** parameteres konstruktor -» megadja a kezdoerteket */
    Vector (float xp, float yp, float zp) {
        x = xp;
        y = yp;
        z = zp;
    }
    
    /** kiirja a a random generált szamokat */
    void print () {
        printf("Coordinates of point: x=%.2f, y=%.2f, z=%.2f \n", x, y, z) ;
    }
    
    
    /**
     * Calculate distance function
     * @param v a ket pont kozotti tavolsag kiszamitasahoz valo fuggvenyben hasznalom
     * @return 0
     */
    
    double getlength(Vector v){
        
        double d = sqrt(pow(x - v.x , 2) + pow(y - v.y , 2) + pow(z - v.z , 2));
        return d;
        
    };
    
};


#endif
