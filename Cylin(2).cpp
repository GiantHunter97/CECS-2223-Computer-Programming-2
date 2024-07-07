/*
* CECS 2223, Computer Programming II Laboratory
* Fall 2022, Sec. 05
* Date: August 17, 2022
* Topic: Lab 1
* File name: Cylinder.cpp
* This file DEFINES a class named Cylinder
* Name: [YOUR NAME HERE], ID#[YOUR ID NUMBER HERE]
*/

// write the required include statement
#include "Cylin.h"
int Cylinder::count = 0;
// Define all methods declared in Cylinder.h
Cylinder::Cylinder() {
	height = 0;
	radius = 0;
	count++;
}

Cylinder::Cylinder(double aHeight) { // MUST initialize ALL fields
	radius = 0;
	height = aHeight;
	count++;
}

Cylinder::Cylinder(double aRadius, double aHeight) {
	radius = aRadius;
	height = aHeight;
	count++;
}

void Cylinder::setHeight(double height) {
	this->height = height;
}

void Cylinder::setRadius(double aRadius) {
	radius = aRadius;
}

double Cylinder::getHeight() const {
	return height;
}

double Cylinder::getRadius() const {
	return radius;
}

double Cylinder::getVolume() const {
	return 3.1416 * radius * radius * height;
}
// The printCylinder method prints the object's field values
// and the volume in a table-ready format
// Use printf to set 10 spaces per column and a floating point
// precision of 3 digits.
// This method DOES NOT print the table's header.
void Cylinder::printCylinder() {
	printf("%-10.3f%-10.3f%-10.3f\n", getRadius(), getHeight(), getVolume());
}

// The getCount method returns the number of objects created
int Cylinder::getCount() const {
	return count;
}