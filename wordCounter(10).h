#pragma once

#include <iostream>
#include <string>

using namespace std;

bool check_word(string src) {
	if (src[0] == '.') {
		return true;
	}
	return false;
}

int counter(string src) {
	int count = 0;
	if (check_word(src)) {
		return count;
	}
	if (src[0] != ' ' && src[0] != '.') {
		count = 1;
	}
	for (int i = 0; i < src.size(); i++) {
		if (src[i] == ' ') {
			count++;
		}
	}
	return count;
}

string delete_space(string src) {
	string dest;
	for (int i = 0; i < src.size(); i++) {
		if (check_word(src)) {
			return src;
		}
		if (src[i] == ' ') {
			if (src[i + 1] == ' ' || src[i + 1] == ',' || src[i + 1] == '.')
				continue;
		}
		dest += src[i];
	}
	return dest;
}