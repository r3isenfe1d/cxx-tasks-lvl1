#pragma once

#include <iostream>

using namespace std;

int get_size();
int** matrix(int rows, int cols);
int** alloc_mem(int rows, int cols);
void print_matrix(int** arr, int rows, int cols);
int find_col(int** arr, int rows, int cols);
void print_col(int** arr, int rows, int cols);

void print_col(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		int j = find_col(arr, rows, cols);
		cout << "  " << arr[i][j] << endl;
	}
	cout << endl;
}

int find_col(int** arr, int rows, int cols) {
	int max = arr[0][0], maxJ = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				maxJ = j;
			}
		}
	}
	return maxJ;
}

void print_matrix(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			cout << "  " << arr[i][j] << "  ";
		cout << endl;
	}
	cout << endl;
}

int** alloc_mem(int rows, int cols) {
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	return arr;
}

int** matrix(int rows, int cols) {
	int** arr = alloc_mem(rows, cols);

	cout << "Enter the elements of matrix:" << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
	return arr;
}

int get_size() {
	int m = 1;
	cout << "Input rows(columns): ";
	cin >> m;
	while (m < 1) {
		cout << "Please, try again: ";
		cin >> m;
	}
	return m;
}