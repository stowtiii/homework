
#include <iostream>
#include <clocale>
int main() {
    int a, b, c, sum;
    std::cout << "Enter 3 numbers: ";
    std::cin >> a >> b >> c;
    sum = a + b + c;
    std::cout << "sum = " << sum << std::endl;
    return 0;
}