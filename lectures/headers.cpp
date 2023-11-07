/*
Name: Jeremy Bergen

Header files
*/
#include "src/cylinder.h"
#include "src/cube.h"
#include "src/sphere.h"

int main(int argc, char *argv[]) {
    int height, radius, edge;
    float volume;

    cylinder::getHeight(height);
    cylinder::getRadius(radius);
    cylinder::calcVolume(height, radius, volume);

    cout << "Your cylinder with height " << height << " and radius " << radius
         << " has a volume of " << volume << endl;

    getEdge(edge);
    calcVolume(edge, volume);

    cout << "Your cube with edge " << edge << " has a volume of " << volume << endl;

    sphere::getRadius(radius);
    sphere::calcVolume(radius, volume);
    cout << "Your sphere with radius " << radius << " has a volume of " << volume << endl;
    return 0;
}

