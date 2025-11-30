/**
 * @file pivot_integer.cpp
 * @brief Find the pivot integer where the sum of numbers from 1 to x equals the sum from x to n.
 *
 * This algorithm finds an integer x such that:
 *     1 + 2 + ... + x = x + (x+1) + ... + n
 *
 * The mathematical solution:
 * Total sum = n * (n + 1) / 2
 * Pivot x exists only if total sum is a perfect square.
 *
 * @author Aditya
 */

#include <iostream>
#include <cmath>

/**
 * @brief Function to compute the pivot integer.
 * @param n The upper limit of the range [1, n].
 * @return int The pivot integer or -1 if no pivot exists.
 */
int pivot_integer(int n) {
    long long total = 1LL * n * (n + 1) / 2;
    long long x = sqrt(total);

    if (x * x == total)
        return (int)x;

    return -1;
}

/**
 * @brief Main function for demonstration.
 */
int main() {
    int n = 8;
    std::cout << "Pivot integer for n = " << n << " is: " << pivot_integer(n) << std::endl;

    return 0;
}
