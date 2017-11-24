//
//  main.cpp
//  Vectors
//
//  Created by Kozak, Luca on 2017. 11. 17..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
#include <cmath>

/**
 * Including the Class
 */
#include "vectoreader.h"

using namespace std;


int main (){
    
    
    int i, j, n;
    
    printf("Number of the points: ");
    scanf("%d", &n);
    
    
    /**
     * Reserve place in the heap for our Vectors
     */
    
    Vector *vectors = (Vector *)malloc(sizeof(Vector)*n);
    
    
    /**
     * A loop with the calling of the printf function
     */
    
    for(int i = 0; i < n; i++)
    {
        vectors[i] = Vector();
        vectors[i].print();
    }
    
    /**
     *Giving value for min&max for the calculation
     */
    double max=0,   min=1000000, d;
    for (i=1; i<=n; i++) {
        
        for(j=1; j<=n; j++){
            
            if (i != j) {
                
                /**
                 *Using the calculate function from the header
                 */
                d = vectors[i].getlength(vectors[j]);
                
                if(d>max) max = d;
                
                if(d<min) min = d;
            }}}
    
    
    printf("max = %f \n",max);
    printf("min = %f \n",min);
    

    free(vectors); /**Free the allocated memory*/
    return 0;
}
