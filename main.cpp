#include <iostream>
double calculateTotal(double p, int q) {
    double t = p * q;

    if (t > 1000) {
        t = t - (t * 0.10);
    }

    return t;
}
int main() {
    std::cout << calculateTotal(250.0, 5) << '\n';
    std::cout << calculateTotal(100.0, 2) << '\n';
    std::cout << calculateTotal(200.0, 5) << '\n';

    return 0;
}
