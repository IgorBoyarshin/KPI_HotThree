#include <iostream>
#include <vector>
#include <set>

int main() {
    std::cout << "Hello there!" << std::endl;
    std::cout << "New line" << std::endl;

    for (unsigned int i = 0; i < 5; i++) {
        std::cout << i << std::endl;
        std::cout << (i+1) << std::endl;
    }
    for (unsigned int i = 1; i < 5; i++) {
        std::cout << i << std::endl;
    }
    for (unsigned int i = 10; i < 50; i++) {
        std::cout << i << std::endl;
    }

    return 0;
}
