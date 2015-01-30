#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

    string s;
    cin>>s;
	map<char, int> letterCount;
	int i;
	for(i=0; i<s.size(); i++) {
		if(letterCount.count(s[i])==0)
			letterCount[s[i]] = 1;
		else
			letterCount[s[i]]++;
	}
	int oddCount = 0;
	for(map<char, int>::iterator iter = letterCount.begin(); iter != letterCount.end(); iter++) {
		if(iter->second % 2 == 1)
			oddCount++;
	}
    int flag;
	if(oddCount > 1)
		flag = 0;
	else
		flag = 1;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}

