#include <bits/stdc++.h>
using namespace std;

void sortZeroesOnes(int n, vector<int> &arr)
{
	int low = 0;
	int high = n - 1;
	int mid = 0;
	while (mid <= high)
	{
		if (arr[mid] == 0)
		{
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		}
		else if (arr[mid] == 1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid], arr[high]);
			high--;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
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

	sortZeroesOnes(n, arr);
	return 0;
}