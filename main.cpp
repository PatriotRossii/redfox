#include "Task.h"

#include <functional>
#include <iostream>

int main() {
    Task<long int, int> fibonacci([](int nth) {
        std::function<long int(int)> lambda = [&](int nth) {
            return nth <= 1 ? nth : lambda(nth - 1) + lambda(nth - 2);
        };
        return lambda(nth);
    });

    std::cout << fibonacci(10);
}
