#include <iostream>

const int size = 10;

void pairedNumbers() {
	int arr[size];
	arr[0] = 0;

	for (int i = 0; i < size; ++i) {
		arr[i] = (i + 1) * 2;
	}

	for (int c = 0; c < size; ++c) {
		std::cout << arr[c] << " ";
	}
}

void unpairedNumbers() {
	int arr[size];
	arr[0] = 0;

	for (int i = 0; i < size; ++i) {
		arr[i] = (2 * i) + 1;
	}

	for (int c = 0; c < size; ++c) {
		std::cout << arr[c] << " ";
	}
}

int main() {
	pairedNumbers();
	std::cout << std::endl;
	unpairedNumbers();
	
	return 0;
}