#pragma once

#include <iostream>

using namespace std;

int get_num();
float** alloc_mem(int rows, int cols);
int check_rows(float** arr);
int check_cols(float** arr, int i);
void clear_mem(float** arr, int rows);
void get_matrix(float** arr, int rows, int cols);
void print_matrix(float** arr, int rows, int cols);
float find_max(float** arr, int rows, int cols);

void clear_mem(float** arr, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

float find_max(float** arr, int rows, int cols) {
	float max = arr[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

void print_matrix(float** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			cout << "\t" << arr[i][j];
		cout << endl;
	}
}

void get_matrix(float** arr, int rows, int cols) {
	cout << "Enter the elements of matrix:" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
}

float** alloc_mem(int rows, int cols) {
	float** arr = new float* [rows];
	check_rows(arr);
	for (int i = 0; i < rows; i++) {
		arr[i] = new float[cols];
		check_cols(arr, i);
	}
	return arr;
}

int check_rows(float** arr) {
	if (arr == NULL) {
		cout << "Sorry. Memory allocation error. Please, reboot the programm." << endl;
		delete[] arr;
		return 0;
	}
	return 1;
}

int check_cols(float** arr, int i) {
	if (arr[i] == NULL) {
		cout << "Sorry. Memory allocation error. Please, reboot the programm." << endl;
		for (int k = 0; k <= i; k++) {
			delete[] arr[k];
		}
		delete[] arr;
		return 0;
	}
	return 1;
}

int get_num() {
	int num = 0;
	cout << "Input number:" << endl;
	cin >> num;
	while (num < 0) {
		cout << "Please, try again:" << endl;
		cin >> num;
	}
	return num;
}