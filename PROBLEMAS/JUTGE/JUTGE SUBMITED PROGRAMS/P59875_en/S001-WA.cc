#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    while (x <= y) {
        std::cout << x << std::endl;
        x++;
    }
}