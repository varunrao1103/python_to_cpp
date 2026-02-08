#include <cstdint>
#include <cstdio>
#include <chrono>

int main() {
    constexpr std::uint64_t iterations = 200'000'000ULL;

    auto start = std::chrono::high_resolution_clock::now();

    double res = 1.0;
    double j1 = 3.0; // 4*1 - 1
    double j2 = 5.0; // 4*1 + 1

    for (std::uint64_t i = 1; i <= iterations; ++i) {
        res -= 1.0 / j1;
        res += 1.0 / j2;
        j1 += 4.0;
        j2 += 4.0;
    }

    res *= 4.0;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::printf("Result: %.12f\n", res);
    std::printf("Execution Time: %.6f seconds\n", elapsed.count());
    return 0;
}
