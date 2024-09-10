#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{

	if (r == 0 || n == r)
		return 1;

	return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
	int n, r;
	cin >> n;
	cin >> r;

	cout << "NCr is: " << nCr(n, r);

	return 0;
}