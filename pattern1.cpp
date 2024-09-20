#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
	if (num <= 1)
		return false;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

void pattern()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = n; j > i; j--)
		{
			cout << n - j + 1 << " ";
		}
		for (int k = 0; k < n; i++)
		{
			/* code */
		}
		
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	// if (n % 2 == 0)
	// {
	// 	cout << "Enter an odd number";
	// 	return 1;
	// }

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || i + j == n - 1) //|| (i == n / 2 && j == n / 2)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}

	return 0;
}