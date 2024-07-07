#pragma once
/*
* CECS 2223, Computer Programming II Laboratory
* Fall 2022, Sec. 05
* Date: August 17, 2022
* Topic: Lab 1
* File name: Cylinder.h
* This file DECLARES a class named Cylinder
* Name: [YOUR NAME HERE], ID#[YOUR ID NUMBER HERE]
*/

// Edited August 22 to add parameterized constructors

// write the include statements required
#include <iostream>
// write the using declaration
using namespace std;
// The Cylinder class has two attributes, height and radius, whose values should be stored
// in a floating point variable. Declare a default constructor and the setter and getter
// methods for the field's values. All getter methods MUST be declared as constant. Declare
// a class method that computes the volume of the cylinder, named getVolume.
class Cylinder {
private:
	// declare the required fields
	double height;
	double radius;
	static int count;
public:
	// declare the required methods
	Cylinder();
	Cylinder(double); // parameterized constructor
	Cylinder(double, double); // parameterized constructor
	void setHeight(double);
	void setRadius(double);
	double getHeight() const;
	double getRadius() const;
	double getVolume() const;
	void printCylinder();
	int getCount() const;
};
