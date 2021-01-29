#include <iostream>

/*
* Practice 03
* - Show example about bellow
* - Use 'new' keyword to dynamic allocation and deallocation about char[12] array memory
*/

void practice03() {
	char* arr = new char[12];

	std::cout << "Text : ";
	std::cin >> arr;

	std::cout << "Your text : " << arr;

	delete[] arr;
}