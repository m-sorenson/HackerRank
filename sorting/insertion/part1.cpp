#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int> v) {
	int i;
	for(i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void insertionSort(vector <int>  ar) {
	int v = ar[ar.size()-1];
	int i;
	for(i=ar.size()-1; ar[i-1] > v; i--) {
		ar[i] = ar[i-1];
		display(ar);
	}
	ar[i] = v;
	display(ar);
}

int main(void) {
	vector <int>  _ar;
	int _ar_size;
	cin >> _ar_size;
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
		int _ar_tmp;
		cin >> _ar_tmp;
		_ar.push_back(_ar_tmp);
	}

	insertionSort(_ar);

	return 0;
}

