#include <bits/stdc++.h>
using namespace std;

class Table
{
public:
	int n;
	Table()
	{
		cin >> n;
	}
	void multiplicationTable()
	{
		for (int i = 0; i < 11; i++)
		{
			cout << n * i << endl;
		}
	}
};

int main()
{
	Table multiply;
	multiply.multiplicationTable();
	return 0;
}