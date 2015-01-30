#include <iostream>


int main() {
	char* test = new char[10];
	test[0] = 'a';
	std::cout << test[0] << std::endl;
	return 0;
}
