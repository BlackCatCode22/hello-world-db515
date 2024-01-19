#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    int doubledNum = num * 2;

    std::cout << "Double of " << num << " is: " << doubledNum << std::endl;

    return 0;
}
