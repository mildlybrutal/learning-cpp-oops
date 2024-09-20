#include <bits/stdc++.h>
using namespace std;

void frequencyElement(int n, vector<int> &arr)
{
	unordered_map<int, int> map;

	for (int i = 0; i < n; i++)
		map[arr[i]]++;

	for (auto x : map)
		cout << x.first << " " << x.second << endl;
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

	frequencyElement(n, arr);

	return 0;
}
