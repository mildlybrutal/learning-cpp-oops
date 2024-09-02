#include <bits/stdc++.h>
using namespace std;

class sortFreq
{
public:
	void frequency(int n, vector<int> &arr)
	{
		unordered_map<int, int> freqMap;
		for (int i = 0; i < n; i++)
		{
			freqMap[arr[i]]++;
		}

		multimap<int, int, greater<int>> freqMultimap;
		for (auto &it : freqMap)
		{
			freqMultimap.insert({it.second, it.first});
		}

		set<int> printed;
		for (auto &it : freqMultimap)
		{
			if (printed.find(it.second) == printed.end())
			{
				cout << it.second << " ";
				printed.insert(it.second);
			}
		}
	}
};

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sortFreq obj1;
	obj1.frequency(n, arr);
	return 0;
}