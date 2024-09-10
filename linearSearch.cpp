#include <bits/stdc++.h>
using namespace std;

int linearSearchRec(int n, vector<int> &arr, int target, int index = 0)

{
	if (index >= n)
	{
		return -1;
	}
	if (arr[index] == target)
	{
		return index;
	}

	return linearSearchRec(n, arr, target, index + 1);
}

int binarySearch(int n, vector<int> &arr, int low, int high, int target)
{
	if (low > high)
		return -1;

	int mid = (low + high) / 2;
	if (arr[mid] == target)
		return mid;
	else if (target > arr[mid])
		return binarySearch(n, arr, mid + 1, high, target);
	return binarySearch(n, arr, low, mid - 1, target);
}

int search(int n, vector<int> &arr, int target)
{
	return binarySearch(n, arr, 0, n - 1, target);
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
	cout << linearSearchRec(n, arr, target) << endl;
	cout << search(n, arr, target);

	return 0;
}