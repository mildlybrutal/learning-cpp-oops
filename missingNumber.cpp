#include <bits/stdc++.h>
using namespace std;

void method1(int n, vector<int> &arr)
{
	int sum1 = (n * (n + 1)) / 2;
	int sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		sum2 += arr[i];
	}
	cout << sum1 - sum2 << endl;
}


int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	method1(n, arr);

	return 0;
}