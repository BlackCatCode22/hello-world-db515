#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    int tripledNum = num * 3;

    std::cout << "Triple of " << num << " is: " << tripledNum << std::endl;

    return 0;
}
