#include <iostream>
#include <cstdlib>

int main() {
    srand(time(0));

    int num1 = rand() % 10;
    int num2 = rand() % 10;

    if (num1 < num2) {
        // Swap numbers
        int num3 = num1;
        num1 = num2;
        num2 = num3;
    }

    std::cout << "What is num1 - num2? ======> ";
    int ans; std::cin >> ans;

    if ((num1 - num2) == ans) std::cout << "You got it!\n";
    else std::cout << "Oh no! You didn't get it. The correct answer is " << num1 - num2 << ".";
    return 0;
}