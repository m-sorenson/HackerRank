#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<unsigned long long> genFib(vector<unsigned long long> cache, const unsigned long long n) {
	int end = cache.size() - 1;
	while(n > cache[end]) {
		cache.push_back(cache[end-1] + cache[end]);
		end++;
	}
	return cache;
}

int main() {
	unsigned int inputCount;
	cin >> inputCount;
	vector<unsigned long long> fibCache;
	fibCache.push_back(0);
	fibCache.push_back(1);
	unsigned long long input;
	unsigned int i;
	for(i=0; i<inputCount; i++) {
		cin >> input;
		if(input > fibCache[fibCache.size() - 1]) {
			fibCache = genFib(fibCache, input);
		}
		if (binary_search(fibCache.begin(), fibCache.end(), input))
			cout << "IsFibo" << endl; else cout << "IsNotFibo" << endl;
	}
    return 0;
}
