#include <iostream>

const int SIZE = 5;

void drawRect()
{
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			std::cout << '#';
		}
		std::cout << std::endl;
	}
}

void drawTri_1()
{
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE - i; j++) {
			std::cout << '#';
		}
		std::cout << std::endl;
	}
}

void drawTri_2()
{
	for (int i = SIZE; i > 0; i--) {
		for (int j = 0; j < SIZE + 1 - i; j++) {
			std::cout << '#';
		}
		std::cout << std::endl;
	}
}

void drawTri_3()
{
	for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 4 - abs(4 - i); j++) {
			std::cout << '#';
		}
		std::cout << std::endl;
	}
}

void drawShapes()
{
	drawRect();
	std::cout << std::endl;
	drawTri_1();
	std::cout << std::endl;
	drawTri_2();
	std::cout << std::endl;
	drawTri_3();
	std::cout << std::endl;
}