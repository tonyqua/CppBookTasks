#include <iostream>

void fib(int n) {
	int a = 0, b = 1;
	std::cout << a << " ";
	for (int i = 0; i < n; ++i) {
		std::cout << b << " ";
		int c = a + b;
		a = b;
		b = c;
	}
}


int main() {
	int n;

	std::cin >> n;

	fib(n);
	
	return 0;
}