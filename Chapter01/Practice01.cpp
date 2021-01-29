#include <iostream>

/*
* Practice 01
* - Entered your name and age and print these
* - You have to use 'std::cout' and 'std::cin'
*/

void practice01() {
	std::string name;
	int age;

	std::cout << "Name : ";
	std::cin >> name;
	std::cout << "Age : ";
	std::cin >> age;

	std::cout << "My Name is " << name << ", My Age is " << age << "\n";
}