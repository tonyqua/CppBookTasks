#include <iostream>
#include <cmath>

const int size = 10;

void squareOfNaturalNumbers() {
	int arr[size];
	for (int i = 0; i < 10; ++i) {
		arr[i] = pow(i, 2);
	}

	for (int c = 0; c < 10; ++c) {
		std::cout << arr[c] << " ";
	}
}

void squareOfTwos() {
	int arr[size];
	for (int i = 0; i < 10; ++i) {
		arr[i] = pow(2, i);
	}

	for (int c = 0; c < 10; ++c) {
		std::cout << arr[c] << " ";
	}
}


int main() {
	squareOfNaturalNumbers();
	std::cout << std::endl;
	squareOfTwos();
	
	return 0;
}