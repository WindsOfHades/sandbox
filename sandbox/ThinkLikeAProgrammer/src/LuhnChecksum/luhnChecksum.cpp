#include <iostream>

#include "luhnChecksum.h"

int getNumber() {
	std::cout << "Please enter a number: ";
	std::cout << std::endl;
	int digit = std::cin.get() - '0';
	std::cout << digit;
	if (isEven(digit)) {
		std::cout << "Number is Even" << std::endl;
	}
	else {
		std::cout << "Number is odd" << std::endl;
	}
	return digit;
}

bool isEven(const int& digit) {
	return digit % 2 == 0;
}
