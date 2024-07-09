#include <iostream>

int main() {
	double km;
	std::cin >> km;
	const double mile = 1.609;
	//std::cout << km / 1.609;
	
	std::cout << km / mile;
	return 0;
}