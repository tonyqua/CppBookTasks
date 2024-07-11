#include <iostream>

const int size = 20;
int arr[size];

void arrayFunc();

void print();

int main() {
	arrayFunc();
	return 0;
}

void arrayFunc() {
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < size; ++i) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	print();
}

void print() {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
}
