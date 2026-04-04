#include <iostream>

// Big O(log n) Logarithmic Time Function
// The function repeatedly divides x by 2
// Each iteration reduces x by half
// Number of iterations ≈ log2(n)

void fun(short n)
{
    short x = n;

    while (x > 0)
    {
        x = x / 2;               
        std::cout << x << std::endl;
    }
}

int main()
{
    short n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::cout << "Tracing fun(n):" << std::endl;
    fun(n);

    return 0;
}