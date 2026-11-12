
#include "order.h"

namespace {
    constexpr double DISCOUNT_THRESHOLD = 1000.0;
    constexpr double DISCOUNT_RATE = 0.10;
}

double applyDiscount(double subtotal) {
    if (subtotal > DISCOUNT_THRESHOLD) {
        return subtotal * (1.0 - DISCOUNT_RATE);
    }

    return subtotal;
}

double calculateOrderTotal(double unitPrice, int quantity) {
    const double subtotal = unitPrice * quantity;
    return applyDiscount(subtotal);
}
