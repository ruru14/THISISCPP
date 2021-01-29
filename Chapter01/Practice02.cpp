#include <iostream>

/*
* Practice 02
* - Show some examples about 'auto' in C++
*/

void practice02() {
	int typeA = 0;
	auto typeB = 1;
	auto typeC = 0.1;
	auto typeD = 'a';
	auto typeE = "ABC";

	std::cout << typeid(typeA).name() << "\n"
		<< typeid(typeB).name() << "\n"
		<< typeid(typeC).name() << "\n"
		<< typeid(typeD).name() << "\n"
		<< typeid(typeE).name() << "\n";

}