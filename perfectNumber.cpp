#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> divisors;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			divisors.push_back(i);
			if (i != n / i && i != 1)
			{
				divisors.push_back(n / i);
			}
		}
	}

	for (auto it : divisors)
	{
		cout << it << " ";
	}
	cout << endl;
	if (accumulate(divisors.begin(), divisors.end(), 0) == n)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}	

	return 0;
}