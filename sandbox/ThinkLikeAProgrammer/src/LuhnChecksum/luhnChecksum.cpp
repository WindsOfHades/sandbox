#include <iostream>

#include "luhnChecksum.h"

bool isEven(const int& digit) {
	return digit % 2 == 0;
}

int doubleDigitSum(const int& digit) {
	int sum = digit * 2;
	if (sum > 9) {
		sum = 1 + (2 * digit % 10);
	}
	return sum;
}

void validateChecksum() {
	std::cout << "Please enter the number: ";
	std::cout << std::endl;
	int digit = 0;
	int count = 1;
	int oddLengthCheckSum = 0;
	int evenLengthCheckSum = 0;
	int checksum = 0;

	digit = std::cin.get();
	while (digit != '\n') {
		if (isEven(count))
		{
			evenLengthCheckSum += digit - '0';
			oddLengthCheckSum += doubleDigitSum(digit - '0');
		}
		else
		{
			evenLengthCheckSum += doubleDigitSum(digit - '0');
			oddLengthCheckSum += digit - '0';
		}	
		digit = std::cin.get();
		count++;
	}

	checksum = (isEven(count - 1)) ? evenLengthCheckSum : oddLengthCheckSum;
	std::cout << std::endl;
	std::cout << "count is: " << count;
	std::cout << std::endl;
	std::cout << "Checksum is: " << checksum;
	std::cout << std::endl;
	if (checksum % 10 == 0)
		std::cout << "Correct checksum!";
	else
		std::cout << "Wrong checksum!";
	std::cout << std::endl;
}