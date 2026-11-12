
#include <iostream>
#include "order.h"

int main() {
    std::cout << calculateOrderTotal(250.0, 5) << '\n';
    std::cout << calculateOrderTotal(100.0, 2) << '\n';
    std::cout << calculateOrderTotal(200.0, 5) << '\n';

    return 0;
}
