#pragma once

#include <iostream>
#include <string>

using namespace std;

struct Model {
	string model;
	string brand;
};

struct Car {
	string color;
	int year = 0;
	string number;
	Model modelBrand;
};

struct AutoPark {
	Car park;
};

Car getInfo() {
	Car obj;

	cout << "Input brand: ";
	cin >> obj.modelBrand.brand;

	cout << "Input model: ";
	cin >> obj.modelBrand.model;

	cout << "Input year: ";
	cin >> obj.year;

	cout << "Input number: ";
	cin >> obj.number;

	cout << "Input color: ";
	cin >> obj.color;

	return obj;
}

Car showInfo(Car obj) {
	cout << endl << "Model: " << obj.modelBrand.brand << ' ' << obj.modelBrand.model << endl;
	cout << "Year: " << obj.year << endl;
	cout << "Number: " << obj.number << endl;
	cout << "Color: " << obj.color << endl;
	return obj;
}