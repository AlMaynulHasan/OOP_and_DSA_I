#include <iostream>

// Removed custom namespace function name conflict with std::cout
namespace asif {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    int a;
    std::cout <<"Total:"<< asif::add(5, 10) << std::endl;

    // Uncomment if needed
    // std::cout << "Asif" << std::endl;
    // std::cin >> a;

    return 0;
}

