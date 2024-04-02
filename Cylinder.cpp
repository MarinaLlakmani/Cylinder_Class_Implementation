#define _USE_MATH_DEFINES
#include "Cylinder.h"
#include <math.h>

Cylinder::Cylinder(int radius, int height) {
	this->radius = radius;
	this->height = height;
}

Cylinder::Cylinder() {
	this->radius = 0;
	this->height = 0;
}

void Cylinder::setRadius(int r) {
	this->radius = r;
}

int Cylinder::getRadius() {
	return this-> radius;
}

void Cylinder::setHeight(int h) {
	this->height = h;
}

int Cylinder::getHeight() {
	return this-> height;
}

int Cylinder::getVolume() {
	double volume = M_PI * pow(radius,2) * height;
	return volume;
}

int  Cylinder::getSurfaceArea() {
	double surfaceArea = 2 * M_PI * radius * height + 2 * M_PI * pow(radius,2);
	return surfaceArea;
}

int Cylinder::compareVolume(Cylinder other) {
	if (this->getVolume() > other.getVolume()) {
		return 1;
	}
	else if (this->getVolume() < other.getVolume()) {
		return -1;
	}
	else {
		return 0;
	}

}

int Cylinder::compareSurfaceArea(Cylinder other) {
	if (this->getSurfaceArea() > other.getSurfaceArea()) {
		return 1;
	}
	else if (this->getSurfaceArea() < other.getSurfaceArea()) {
		return -1;
	}
	else {
		return 0;
	}

}


