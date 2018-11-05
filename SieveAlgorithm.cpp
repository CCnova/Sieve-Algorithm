//Program to implement Sieve algorithms to find all primes smaller than a integer n
//
#include <iostream>
#include <cstring>

void Sieve(int n)
{
	bool arr[n];
	memset(arr, true, sizeof(arr));

	for(int i = 2; i < n; i++)
	{
		if(arr[i] == true)
		{
			for(int j = i*2; j < n; j += i)
			{
				arr[j] = false;
			}
		}
	}

	for(int i = 2; i < n; i++)
	{
		if(arr[i] == true)
		{
			std::cout << i << " ";
		}
	}

	std::cout << '\n';
}



int main()
{
	int x;
	std::cout << "Enter the integer value: ";
	std::cin >> x;

	std::cout << "The primes are: " << std::endl;
	Sieve(x);

	return 0;
}
