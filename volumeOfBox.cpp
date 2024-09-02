#include <bits/stdc++.h>
using namespace std;

class Box
{
public:
	static int length;
	static int breadth;
	static int height;

	// Constructor
	Box()
	{
		cin >> length >> breadth >> height;
	}

	static void printVolume()
	{
		cout << length * breadth * height << endl;
	}
};

int Box::length = 0;
int Box ::breadth = 0;
int Box ::height = 0;

int main()
{
	Box obj1;
	obj1.printVolume(); // method 1
	Box::printVolume(); // method 2
	return 0;
}