#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	unsigned long long a, b;
	int n;
	cin >> a >> b >> n;
	unsigned long long temp;
	//n--;
	while(n--) {
		temp = b;
		b = b * b + a;
		a = temp;
	}
	cout << b << endl;
    return 0;
}
