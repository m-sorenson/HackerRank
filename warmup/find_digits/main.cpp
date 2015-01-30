#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solver(int n) {
    int count = 0;
    int temp = n;
	int cur;
	do {
		cur = temp % 10;
		if (cur != 0 && n % cur == 0)
		{
			count++;
		}
		temp /= 10;
	} while(temp > 0);
    return count;
}

int main() {
    int inputCount;
	int input;
	cin >> inputCount;
	int i;
	for(i=0; i<inputCount; i++) {
        cin >> input;
        cout << solver(input) << endl;
	}
    return 0;
}

