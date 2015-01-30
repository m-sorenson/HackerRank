#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int minOp(char* text, int maxSize) {
	int sum = 0;
	int last;
	for(last=0; last < maxSize && text[last]; last++);
	last--;
	int i;
	int half = last/2 + 1;
	for(i=0; i<half; i++) {
		sum += abs(text[i] - text[last-i]);
	}
	return sum;
}

int main() {
	int inputCount;
	cin >> inputCount;
	char* input = new char[100005];
	while(inputCount--) {
		cin >> input;
		cout << minOp(input, 100005) << endl;
	}
    return 0;
}
