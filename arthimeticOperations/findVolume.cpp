#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float cubeSide = 5.4;
    float sphereRadius = 2.33;
    float coneRadius = 7.65;
    float coneHeight = 14.0;

    float volCube, volSphere, volCone = 0;

    volCube = pow(cubeSide,3);
    volSphere =  4 * M_PI * pow(sphereRadius, 3)/3;
    volCone = M_PI * pow(coneRadius, 2) * coneHeight/3;

    cout<<"The volume of Cube is "<<volCube<<"\n";
    cout<<"The volume of Sphere is "<<volSphere<<"\n";
    cout<<"The volume of Cone is "<<volCone<<"\n";
    
    return 0;
}