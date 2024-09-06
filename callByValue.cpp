// Swap using XOR
// Call by value
#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b)
{
	cout << "Before swapping: " << a << " " << b << endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "After swapping: " << a << " " << b << endl;
}

int main()
{
	int a, b;
	cin >> a >> b;
	swap(a, b);
	return 0;
}