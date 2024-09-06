#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
	int cnt = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cnt++;
			if (n / i != i)
			{
				cnt = cnt + 1;
			}
		}
	}

	if (cnt == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int reverseNumber(int n)
{
	int temp = n;
	int revNo = 0;
	while (temp != 0)
	{
		int digit = temp % 10;
		revNo = (revNo * 10) + digit;
		temp /= 10;
	}

	return revNo;
}

int main()
{
	int n;
	cin >> n;
	int reversed = reverseNumber(n);
	if (prime(reversed))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}