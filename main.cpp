//
//  main.cpp
//  Vectors
//
//  Created by Kozak, Luca on 2017. 11. 17..
//  Copyright © 2017. Kozak, Luca. All rights reserved.


/**
 * Creating random points and calculating the shortest and longest distance.
 */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
#include <cmath>

#include "Vector.h"

using namespace std;


int main (){
    
    
    int i, j, n;
    
    printf("Number of the points: ");
    scanf("%d", &n);
    
    Vector *vectors = (Vector *)malloc(sizeof(Vector)*n);
    
    
    for(int i = 0; i < n; i++)
    {
        vectors[i] = Vector();
        vectors[i].print();
    }
    
    double max=0,   min=1000000, d;
    for (i=1; i<=n; i++) {
        
        for(j=1; j<=n; j++){
            
            if (i != j) {
                
                d = vectors[i].getlength(vectors[j]);
                
                if(d>max) max = d;
                
                if(d<min) min = d;
            }}}
    
    
    printf("max = %f \n",max);
    printf("min = %f \n",min);
    
    
    free(vectors);
    return 0;
}
