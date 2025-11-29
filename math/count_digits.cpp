#include <iostream>
#include <cassert>

// returns how many digits the number has
int count_digits(int n) {
    if (n == 0) return 1;

    int c = 0;
    while (n > 0) {
        c++;
        n /= 10;
    }
    return c;
}

void test() {
    assert(count_digits(12345) == 5);
    assert(count_digits(9) == 1);
    assert(count_digits(1000) == 4);
    assert(count_digits(0) == 1);
}

int main() {
    test();
    std::cout << "Tests passed\n";
    return 0;
}
