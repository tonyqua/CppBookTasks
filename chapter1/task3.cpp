#include <iostream>

int main() {
	system("chcp 1251>nul");
	std::cout << "������ ���� ��� �����: ";
	int a;
	std::cin >> a;
	
	int number = 1;
	/*while (count < a) {
		if (number % 4 == 3) {
			std::cout << number << " " << "\n";
			count++;
		}
		number++;
	}*/
	for (int count = 0; count < a; number++) {
		if (number % 4 == 3) {
			std::cout << number << " " << "\n";		
			count++;
		}
	}

	return 0;
}