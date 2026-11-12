
#include <iostream>

constexpr double DISCOUNT_THRESHOLD = 1000.0;
constexpr double DISCOUNT_RATE = 0.10;

double calculateOrderTotal(double unitPrice, int quantity) {
    double subtotal = unitPrice * quantity;

    if (subtotal > DISCOUNT_THRESHOLD) {
        subtotal -= subtotal * DISCOUNT_RATE;
    }

    return subtotal;
}

int main() {
    std::cout << calculateOrderTotal(250.0, 5) << '\n';
    std::cout << calculateOrderTotal(100.0, 2) << '\n';
    std::cout << calculateOrderTotal(200.0, 5) << '\n';

    return 0;
}

