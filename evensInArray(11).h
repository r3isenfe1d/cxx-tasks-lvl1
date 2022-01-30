#pragma once

#include <iostream>

using namespace std;

void print_all(int* arr, int* evens, int* without, int size, int a, int b) {
	cout << "Currnt array: ";
	print_arr(arr, size);
	cout << "\nEvens' positions: ";
	print_arr(evens, a);
	cout << "\nArray without evens: ";
	print_arr(without, b);
}

int* get_arr(int size) {
	int* arr = new int[size];
	cout << "Input elements:" << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i << "] = ";
		cin >> arr[i];
	}
	return arr;
}

void print_arr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << " " << arr[i] << " ";
	}
}

int amount_even(int* arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}

void replace_even(int* arr, int size) {
	int evenS = amount_even(arr, size), withoutS = size - evenS;
	int* evens = new int[evenS], * without = new int[withoutS];
	int i = 0, j = 0, k = 0;

	for (i = 0; i < size; i++) {
		if (arr[i] % 2 == 0 && j < evenS) {
			evens[j] = i;
			j++;
		}
		else if (k < withoutS) {
			without[k] = arr[i];
			k++;
		}
	}

	print_all(arr, evens, without, size, evenS, withoutS);

	delete[] arr;
	delete[] evens;
	delete[] without;
}

int get_size() {
	int m = 1;
	cout << "Input size of array: ";
	cin >> m;
	while (m < 1) {
		cout << "Please, try again: ";
		cin >> m;
	}
	return m;
}