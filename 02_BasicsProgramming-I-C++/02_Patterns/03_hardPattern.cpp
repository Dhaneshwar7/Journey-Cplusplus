
#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for the numeric pyramid: ";
    std::cin >> rows;

    for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << "  ";
        }

        while (k != 2 * i - 1) {
            std::cout << i << " ";
            ++k;
        }

        std::cout << std::endl;
    }

    return 0;
}