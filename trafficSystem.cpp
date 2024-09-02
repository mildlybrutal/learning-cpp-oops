#include <bits/stdc++.h>
using namespace std;

enum TrafficColor
{
	red,
	yellow,
	green
};

int main()
{
	TrafficColor currentColor;
	int input;

	cin >> input;

	if (input == 0)
		currentColor = red;
	else if (input == 1)
		currentColor = yellow;
	else if (input == 2)
		currentColor = green;
	else
	{
		cout << "Invalid input" << endl;
		return 1;
	}

	switch (currentColor)
	{
	case red:
		cout << "red" << endl;
		break;
	case yellow:
		cout << "Yellow" << endl;
		break;
	case green:
		cout << "Green" << endl;
		break;
	default:
		cout << "Invalid Color" << endl;
		break;
	}

	return 0;
}

// Red --> Stop
// Yellow --> wait
//  Green --> Go