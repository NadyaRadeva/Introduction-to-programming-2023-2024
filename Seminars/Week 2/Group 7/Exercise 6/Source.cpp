#include <iostream>

int main() {
    unsigned n;
    std::cin >> n;

    const bool change = (n != 0) && (n % 10 == 0);
    std::cout << change << std::endl;

    return 0;
}
