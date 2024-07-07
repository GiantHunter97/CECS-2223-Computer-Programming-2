/*
* CECS 2223, Computer Programming II Laboratory
* Fall 2022, Sec. 05
* Date: September 12, 2022
* Topic: Introduction to Dynamic Memory
* File name: dynamicMemory.cpp
*/
#include "Cylin.h"
int main() {
	//Cylinder cylinders[3];
	//// to set values individually
	//cylinders[0].setHeight(5);
	//cylinders[0].setRadius(6);
	//cylinders[0].printCylinder();
	//cout << endl;
	//// set values as an array
	//double aValue = 0;
	//for (int i = 0; i < 3; i++) {
	//	cout << "Enter the radius for cylinder #" << i + 1 << ": ";
	//	cin >> aValue;
	//	cylinders[i].setRadius(aValue);
	//	cout << "Enter the height for cylinder #" << i + 1 << ": ";
	//	cin >> aValue;
	//	cylinders[i].setHeight(aValue);
	//	cout << endl;
	//}
	//cout << "The cylinders stored in the cylinders array have the following dimensions:\n";
	//printf("%-10s%-10s%-10s\n", "RADIUS", "HEIGHT", "VOLUME");
	//for (int i = 0; i < 3; i++)
	//	cylinders[i].printCylinder();
	//cout << endl;
	// declare a pointer to be used as the name of a dynamic array
	double radius = 0, height = 0;
	//Cylinder* cylinderSet = nullptr;
	Cylinder** cylinderSet = nullptr;
	int size = 0;
	cout << "Enter the size of the array: ";
	cin >> size;
	//cylinderSet = new Cylinder[size];
	cylinderSet = new Cylinder * [size];
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "Enter the radius for cylinder #" << i + 1 << ": ";
		//cin >> aValue;
		//cylinderSet[i].setRadius(aValue);
		cin >> radius;
		cout << "Enter the height for cylinder #" << i + 1 << ": ";
		// cin >> aValue;
		//cylinderSet[i].setHeight(aValue);
		cin >> height;
		// create the new object
		cylinderSet[i] = new Cylinder(radius, height);
		cout << endl;
	}
	cout << "The cylinders stored in the cylinderSet array have the following dimensions:\n";
	printf("%-10s%-10s%-10s\n", "RADIUS", "HEIGHT", "VOLUME");
	for (int i = 0; i < size; i++)
		//cylinderSet[i].printCylinder();
		cylinderSet[i]->printCylinder();
	cout << endl;
	// add a new cylinder object to the array
	size++;
	//Cylinder* temp = cylinderSet; // stores the reference to the existing array
	Cylinder** temp = cylinderSet; // stores the reference to the existing array
	//cylinderSet = new Cylinder[size]; // creates the new array
	cylinderSet = new Cylinder * [size];
	// to copy values in object array
	/*for (int i = 0; i < size - 1; i++) {
		cylinderSet[i].setRadius(temp[i].getRadius());
		cylinderSet[i].setHeight(temp[i].getHeight());
	}*/
	// to copy values in pointer array
	for (int i = 0; i < size - 1; i++) 
		cylinderSet[i] = temp[i];

	/*cout << "Enter the radius for cylinder " << size << ": ";
	cin >> aValue;
	cylinderSet[size - 1].setRadius(aValue);
	cout << "Enter the height for cylinder " << size << ": ";
	cin >> aValue;
	cylinderSet[size - 1].setHeight(aValue);*/
	cout << "Enter the radius for cylinder " << size << ": ";
	cin >> radius;
	cout << "Enter the height for cylinder " << size << ": ";
	cin >> height;
	cylinderSet[size - 1] = new Cylinder(radius,height);
	cout << endl;
	cout << "The cylinders stored in the cylinderSet array have the following dimensions:\n";
	printf("%-10s%-10s%-10s\n", "RADIUS", "HEIGHT", "VOLUME");
	for (int i = 0; i < size; i++)
		//cylinderSet[i].printCylinder();
		cylinderSet[i]->printCylinder();
	cout << endl;
	delete[] temp; // releases memory associated the the old array
	//cout << cylinderSet[0].getCount() << " Cylinder objects were created in this program\n\n";
	cout << cylinderSet[0]->getCount() << " Cylinder objects were created in this program\n\n";
	system("pause");
	return 0;
}