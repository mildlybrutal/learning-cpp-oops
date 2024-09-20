#include <bits/stdc++.h>
using namespace std;

int method1(int n, vector<int> &arr, int target)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == target)
		{
			cnt++;
		}
	}

	return cnt;
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
	int target;
	cin >> target;
	cout << method1(n, arr, target);

	return 0;
}