#include <iostream>

const int size = 10;
int arr[size];

void arrFunc() {
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            arr[i] = i;
        }
        else {
            arr[i] = i * i;
        }
    }


    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    arrFunc();
    
    return 0;
}
