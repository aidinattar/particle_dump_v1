// Created by Aidin Attar. 2019 

// read.cc

#include <fstream>

int read( std::ifstream& file,
          float& x, float& y, float& z,
          int* q,
          float* Px, float* Py, float* Pz){
    
    int n;

    file >> x >> y >> z;
    file >> n;

    for (int i=0; i<n; ++i)
        file >> q[i]
             >> Px[i] >> Py[i] >> Pz[i];
    
    return n;
}