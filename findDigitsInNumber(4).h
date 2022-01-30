#pragma once

#include <iostream>

using namespace std;

int scan_size() {
	int size;
	cout << "Enter amount of elemenets in array: ";
	cin >> size;
	while (size < 0) {
		cout << "Please, try again: ";
		cin >> size;
	}
	return size;
}

void scan(int* arr, int size) {

	cout << "\n\tEnter the elemenets\n";
	for (int i = 0; i < size; i++) {
		cout << "[" << i << "]: ";
		cin >> arr[i];
	}
}

void counter(int* arr, int size) {
	unsigned count = 0;
	for (int i = 0; i < size; i++) {
		count = 0;
		while (arr[i] != 0) {
			arr[i] /= 10;
			count++;
		}
		arr[i] = count;
	}
}

void print(int* arr, int size) {
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}