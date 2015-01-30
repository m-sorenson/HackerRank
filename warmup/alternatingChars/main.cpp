#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int repeats(const char* const s, const int size) {
	int count = 0;
	char cur = s[0];
	int i = 0;
	while(s[i++]) {
		if(s[i] == cur)
			count++; else cur = s[i];
	}
	return count;
}

int main() {
	int inputCount;
	char* input = new char[1000000];
	cin >> inputCount;
	while(inputCount--) {
		cin >> input;
		cout << repeats(input, 1000000) << endl;
	}
	return 0;
}
