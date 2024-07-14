#include <iostream>

const int size = 9;
int arr[size];

void func() {
	int a = 0;
	for (int i = 0; i < size; ++i) {
		std::cin >> a;
		arr[i] = a;
	}

	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
}

int main() {
	func();
	return 0;
}