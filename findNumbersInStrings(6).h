#pragma once

#include <iostream>

using namespace std;

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

void print_arr(int* arr, int count) {
	for (int i = 0; i < count; i++) {
		cout << arr[i] << " ";
	}
}

int toInt(char symbol) {
	int ch = 0;
	return ch = symbol - '0';
}

bool check_ch(char symbol) {
	for (int i = '0'; i <= '9'; i++) {
		if (symbol == i) {
			return true;
		}
	}
	return false;
}

bool subcounter(string str) {
	for (int i = 0; i < str.size(); i++) {
		if (check_ch(str[i])) {
			return true;
		}
	}
	return false;
}

int find_max(string str) {
	int max = 0, digit = 0;
	for (int i = 0; i < str.size(); i++) {
		if (check_ch(str[i])) {
			digit = toInt(str[i]);
			if (max < digit) {
				max = digit;
			}
		}
	}
	return max;
}

void fill_arr(int* arr, int count, string* str, int strSize) {
	int i = 0, j = 0;
	while (i < count && j < strSize) {
		if (subcounter(str[j])) {
			arr[i++] = find_max(str[j]);
		}
		j++;
	}
}

int counter(string* str, int strSize) {
	int count = 0;
	for (int i = 0; i < strSize; i++) {
		if (subcounter(str[i]))
			count++;
	}
	return count;
}