// Created by Aidin Attar. 2019

// main.cc

#include<fstream>

int read(  std::ifstream& file,
           float& x, float& y, float& z,
           int* q,
           float* Px, float* Py, float* Pz );
void dump( int evNumber, int nParticles,
           float x, float y, float z,
           int q[],
           float Px[], float Py[], float Pz[] );

int main( int argc, char* argv[] ) {

    // open input file
    const char* name = argv[1];
    std::ifstream file(name);

    // declare event variables
    int evNumber;
    int nParticles;
    float x, y, z;
    int q[10];
    float Px[10], Py[10], Pz[10];

    // loop over events
    while (file >> evNumber){

        nParticles = read( file, x, y, z, q,
                           Px, Py, Pz);
        dump( evNumber, nParticles, x, y, z,
              q, Px, Py, Pz);
    }

    return 0;
}
