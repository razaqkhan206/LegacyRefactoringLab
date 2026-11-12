
#include <cassert>
#include "order.h"

int main() {
    assert(calculateOrderTotal(250.0, 5) == 1125.0);
    assert(calculateOrderTotal(100.0, 2) == 200.0);
    assert(calculateOrderTotal(200.0, 5) == 1000.0);

    assert(applyDiscount(1500.0) == 1350.0);

    return 0;
}
