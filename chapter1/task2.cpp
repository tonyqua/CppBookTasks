#include <iostream>

int main() {
    int count = 0;  
    int number = 1; 
    
    while (count < 5) {
        if (number % 2 != 0) {
            std::cout << number << " ";
            count++;
        }
        number++;
    }

    std::cout << "\n";
    return 0;
}
