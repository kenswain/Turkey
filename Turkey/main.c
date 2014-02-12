//
//  main.c
//  Turkey
//
//  Created by Ken Swain on 2/11/14.
//  Copyright (c) 2014 Ken Swain. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // Declare the variable called 'weight' of type float
    float weight;
    
    // Store the number in that variable
    
    weight = 14.2;
    
    // log it to the user
    printf("The turkey weighs %f.\n", weight);
    
    // declare another variable of type float
    
    float cookingTime;
    
    // calculate the cooking time and store it in the variable
    // in this case, '*' means 'multiplied by'
    cookingTime = 15.0 + 15.0 * weight;
    
    // log that to the user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    
    // End this function and indicate successs
    return 0;
}

