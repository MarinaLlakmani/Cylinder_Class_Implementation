// Takehome_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Cylinder.h"
using namespace std;
int main()
{
    Cylinder a = Cylinder(6, 4);
    Cylinder b = Cylinder(10, 1);
    Cylinder c = Cylinder();

    cout << "Volume of a equals: " << a.getVolume() << endl;
    cout << "Surface Area of a equals: " << a.getSurfaceArea() << endl;

    cout << "Volume of b equals: " << b.getVolume() << endl;
    cout << "Surface Area of b equals: " << b.getSurfaceArea() << endl;

    cout << "Volume of c equals: " << c.getVolume() << endl;
    cout << "Surface Area of c equals: " << c.getSurfaceArea() << endl;

    int abvolume = a.compareVolume(b);
    if (abvolume == 1) {
        cout << "Cylinder A has more volume than Cylinder B" << endl;
    }
    else if (abvolume == -1) {
        cout << "Cylinder B has more volume than Cylinder A" << endl;
    }
    else if (abvolume == 0) {
        cout << "Cylinders A and B have the same volume" << endl;
    }




    int bcSA = b.compareSurfaceArea(c);
    if (bcSA == 1) {
        cout << "Cylinder B has more surface area than Cylinder C" << endl;
    }
    else if (bcSA == -1) {
        cout << "Cylinder C has more surface area than Cylinder B" << endl;
    }
    else if (bcSA == 0) {
        cout << "Cylinders B and C have the same surface area" << endl;
    }



    //TODO Write code using setHeight, setRadius, getHeight, and getRadius 
    //to make Cylinder B have the same measurements as Cylinder A.

    int RadiusA = a.getRadius();
    int heightA = a.getHeight();

    b.setRadius(RadiusA);
    b.setHeight(heightA);

    abvolume = a.compareVolume(b);
    if (abvolume == 1) {
        cout << "Cylinder A has more volume than Cylinder B" << endl;
    }
    else if (abvolume == -1) {
        cout << "Cylinder B has more volume than Cylinder A" << endl;
    }
    else if (abvolume == 0) {
        cout << "Cylinders A and B have the same volume" << endl;
    }

    //TODO Use setRadius and setHeight to make Cylinder C have more Surface Area than Cylinder B

    int radiusB = b.getRadius();
    int heightB = b.getHeight();

    int newRadius = radiusB + 1;
    int newHeight = heightB + 1;

    c.setRadius(newRadius);
    c.setHeight(newHeight);

    bcSA = b.compareSurfaceArea(c);
    if (bcSA == 1) {
        cout << "Cylinder B has more sur`face area than Cylinder C" << endl;
    }
    else if (bcSA == -1) {
        cout << "Cylinder C has more surface area than Cylinder B" << endl;
    }
    else if (bcSA == 0) {
        cout << "Cylinders B and C have the same surface area" << endl;
    }
    return 0;
}