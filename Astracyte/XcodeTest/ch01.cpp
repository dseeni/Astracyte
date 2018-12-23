//
//  ch01.cpp
//  Astracyte
//
//  Created by Thomas Anderson on 12/22/18.
//  Copyright © 2018 Extropia. All rights reserved.
//

#include "ch01.hpp"

#include <iostream>
#include <string.h>

using namespace std;

void printVar(string name,
              double value)
{
    std::cout<< name << " = " << value << std::endl;

}

void updateWave(const double timeInterval,
                double *x,
                double *speed)
{
    (*x) += timeInterval * (*speed);
    
    //Boundary Reflection
    if ((*x) > 1.0) {
        (*speed) *= -1.0;
        (*x) += 1.0 + timeInterval * (*speed);
        
    } else if ((*x) < 0.0) {
        (*speed) *= -1.0;
        (*x) += timeInterval * (*speed);
        
    }
    
}

int ch01()
{
    
    std::cout << "Welcome to chapter 01" << std::endl;
    
    double x = 0.0;
    double y = 1.0;
    double xSpeed = 1.0;
    double ySpeed = -.5;
    
    const int fps = 100;
    const double timeInterval = 1.0/ fps;
    
    cout << "Initalizing Values:" << endl;
    printVar("x", x);
    printVar("y", y);
    printVar("xspeed", xSpeed);
    printVar("yspeed", ySpeed);
    printVar("fps", fps);
    printVar("timeInterval", timeInterval);
    
    for (int i =0; i < 1000; i++) {
        
        //Update Wave
        printVar("i", i);
        updateWave(timeInterval, &x, &xSpeed);
        updateWave(timeInterval, &y, &ySpeed);
        
        
        
        
    }
    
    return 0;
}
