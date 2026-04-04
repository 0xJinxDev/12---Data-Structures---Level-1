#include <iostream>

// Big O(n^2) Quadratic Time Function
// The function has two nested loops
// For each i, it runs another loop of n steps
// So total operations are n * n = n^2

int MultiplicationSum(short n)
{
	int Sum = 0;

	for (int i = 1; i <= n; i++) // runs n times
	{
		for (int j = 1; j <= n; j++) // runs n times for each i
		{
			Sum = Sum + (i * j);
		}
	}

	return Sum;
}

int main()
{
	short n;

	std::cout << "Enter n: ";
	std::cin >> n;

	int result = MultiplicationSum(n);

	std::cout << "Sum = " << result << std::endl;

	return 0;
}