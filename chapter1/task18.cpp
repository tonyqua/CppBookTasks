#include <iostream>
const int size = 20;
int arr[size];
void arrayFunc() {
	
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < size; ++i) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}

void print() {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
}

int main() {
	arrayFunc();
	print();
	return 0;
}