#pragma once

#include <iostream>
#include <string>

using namespace std;

struct Model {
	string model;
	string brand;
};

struct Car {
	Model modelBrand;
	int year = 0;
	string number;
	string color;
};

int getSize();
void clearCin(); 
Car* allocMem(int n);
Car getInfo();
void showInfo(Car obj);
void getPark(Car* carArr, int n);
void showPark(Car* carArr, int n);
void sortYear(Car* carArr, int n);
bool answer();
void showResultOfSearch(Car carArr);
bool searchNumber(Car& searchedCar, Car* carArr, int n, int& count, string* logs);
void search(Car* carArr, int n);
string* resize(string* srcAr, int count);
void copyAr(string* srcAr, string* destAr, int count);
void writeLog(string* logs, string log, int count);
void showLogs(string* logs, int count);

int getSize() {
	int n = 1;
	cout << "Input amount cars: ";
	cin >> n;
	while (n < 1) {
		cout << "Please, try again: ";
		cin >> n;
	}
	return n;
}

void clearCin() {
	if (char(cin.peek()) == '\n') {
		cin.ignore();
	}
}

Car* allocMem(int n) {
	Car* carArr = new Car[n];
	return carArr;
}

Car getInfo() {
	Car obj;

	cout << "Input brand and press *enter*: ";
	clearCin();
	getline(cin, obj.modelBrand.brand, '\n');

	cout << "Input model and press *enter*: ";
	getline(cin, obj.modelBrand.model, '\n');

	cout << "Input year and press *enter*: ";
	cin >> obj.year;

	cout << "Input number and press *enter*: ";
	clearCin();
	getline(cin, obj.number, '\n');

	cout << "Input color and press *enter*: ";
	getline(cin, obj.color, '\n');

	return obj;
}

void showInfo(Car obj) {
	cout << "Brand and model: " << obj.modelBrand.brand << ' ' << obj.modelBrand.model << endl;
	cout << "Year: " << obj.year << endl;
	cout << "Number: " << obj.number << endl;
	cout << "Color: " << obj.color << endl;
}

void getPark(Car* carArr, int n) {
	for (int i = 0; i < n; i++) {
		cout << '\t' << "Car #" << (i + 1) << endl;
		carArr[i] = getInfo();
	}
}

void showPark(Car* carArr, int n) {
	system("pause");
	system("cls");

	cout << "Your autopark:" << endl;
	for (int i = 0; i < n; i++) {
		cout << '\t' << "Car #" << (i + 1) << endl;
		showInfo(carArr[i]);
	}
}

void sortYear(Car* carArr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int index = i;
		int maxYear = carArr[i].year;
		for (int j = i + 1; j < n; j++) {
			if (carArr[j].year > maxYear) {
				maxYear = carArr[j].year;
				index = j;
			}
		}
		swap(carArr[i], carArr[index]);
	}
}

bool answer() {
	char check;
	cout << "Continue searching? [y/n]: ";
	cin >> check;
	if (check == 'y')
		return true;
	return false;
}

void showResultOfSearch(Car carArr) {

	cout << "Searched car: " << carArr.modelBrand.brand << ' ' << carArr.modelBrand.model << endl;
	cout << "Year: " << carArr.year << endl;
	cout << "Number: " << carArr.number << endl;
	cout << "Color: " << carArr.color << endl;
}

bool searchNumber(Car& searchedCar, Car* carArr, int n, int& count, string* logs) {
	string carNumber;
	cout << "Input number of searched car: ";
	clearCin();
	getline(cin, carNumber, '\n');

	writeLog(logs, carNumber, count);
	showLogs(logs, count);

	for (int i = 0; i < n; i++) {
		if (carArr[i].number == carNumber) {
			searchedCar = carArr[i];
			return true;
		}
	}
	cout << "No result, sorry." << endl;

	return false;
}

void search(Car* carArr, int n) {
	Car searchedCar;
	bool check = true, response;
	int count = 0;
	string* logs = new string[count];

	while (check) 
	{
		response = searchNumber(searchedCar, carArr, n, count, logs);
		if (response) {
			showResultOfSearch(searchedCar);
		}
		check = answer();
	}

	showLogs(logs, count);
	delete[] logs;
}

string* resize(string* srcAr, int count) {
	string* destAr = new string[count + 1];

	for (int i = 0; i < count; i++) 
		cout << "srcAr: " << srcAr[i] << " ";

	if (count > 0) {
		copyAr(srcAr, destAr, count);
	}

	return destAr;
} 

void copyAr(string* srcAr, string* destAr, int count) {
	for (int i = 0; i < count; i++) {
		destAr[i] = srcAr[i];
		cout << "DEST_INSIDE: " << destAr[i] << endl;
	}
}

void writeLog(string* logs, string log, int count) {
	logs = resize(logs, count);
	logs[count] = log;

	cout << "Inside logs:\n";
	for (int i = 0; i < count + 1; i++)
	{
		cout << i << ": " << logs[i] << endl;
	}
}

void showLogs(string* logs, int count) {
	cout << "Search history:" << endl;
	for (int i = 0; i < count; i++) {
		cout << (i + 1) << ": " << logs[i] << endl;
	}
}