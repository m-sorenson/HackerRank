#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	unsigned int maxV = -1;
	int inputCount;
	cin >> inputCount;
	unsigned int curV;
	while(inputCount--) {
		cin >> curV;
		cout << (curV ^ maxV) << endl;
	}
    return 0;
}
