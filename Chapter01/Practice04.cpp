#include <iostream>

/*
* Practice 04
* - Write function 'void Swap(int &a, int &b)'
* - Function conduct swap two variable
*/

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void practice04() {
	int a = 10;
	int b = 20;

	std::cout << "A : " << a << ", B : " << b << "\n";
	Swap(a, b);
	std::cout << "A : " << a << ", B : " << b << "\n";

}