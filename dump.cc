// Created by Aidin Attar. 2019 

// dump.cc

#include <iostream>

void dump( int evNumber, int nParticles,
           float x, float y, float z,
           int q[],
           float Px[], float Py[], float Pz[]){
    
     std::cout << evNumber   << std::endl
               << x          << ' '
               << y          << ' '
               << z          << std::endl
               << nParticles << std::endl;
    
     for ( int i=0; i<nParticles; ++i ) 
          std::cout << q[i]  << ' '
                    << Px[i] << ' '
                    << Py[i] << ' '
                    << Pz[i] << ' ' << std::endl;
    
    return;

}