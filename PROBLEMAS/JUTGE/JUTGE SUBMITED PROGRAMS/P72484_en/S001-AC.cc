#include <iostream>

int main () {
	int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n-i; j++) std::cout << ' ';
        for (int j = 0; j < i*2-1; j++) std::cout << '*';
        std::cout << std::endl;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) std::cout << ' ';
        for (int j = 0; j < (n-i)*2-1; j++) std::cout << '*';
        std::cout << std::endl;
    }
    return 0;
}