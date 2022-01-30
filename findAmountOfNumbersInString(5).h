#pragma once

#include <iostream>

using namespace std;

void counter(string str) {
	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		for (int k = '0'; k <= '9'; k++) {
			if (str[i] == k) {
				count++;
				break;
			}
		}
	}
	cout << "count = " << count << endl;
}