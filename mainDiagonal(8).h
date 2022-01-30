#pragma once

#include <iostream>

using namespace std;

int** matrix(int size);
int* arr_to_mass(int** arr, int size);
int get_size();
void print_matrix(int** arr, int* mass, int size);

void print_matrix(int** arr, int* mass, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << "\t" << arr[i][j];
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "\t" << mass[i];
	}
}

int** alloc_mem(int size) {
	int** arr = new int* [size];
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
	}
	return arr;
}

int** matrix(int size) {
	int** arr = alloc_mem(size);

	cout << "Enter the elements of matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
	return arr;
}

int* arr_to_mass(int** arr, int size) {
	int k = 0;
	int* mass = new int[size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				mass[k] = arr[i][j];
				k++;
			}
		}
	}
	return mass;
}

int get_size() {
	int size = 0;
	cout << "Input the quantity (number > 0) of elemenets in array:" << endl;
	cin >> size;
	while (size < 0) {
		cout << "Please, try again:" << endl;
		cin >> size;
	}
	return size;
}
