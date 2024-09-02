#include <bits/stdc++.h>
using namespace std;

class Cube
{
public:
	static int area;
	Cube()
	{
		cin >> area;
	}
	static void getVolumeOfCube()
	{
		cout << "Volume of Cube: " << area * area * area;
	}
};

class Cylinder
{
public:
	static float radius;
	static float height;

	Cylinder()
	{
		cin >> radius >> height;
	}

	static void getVolume()
	{
		cout << "Volume of Cylinder: " << 3.14 * (radius * radius) * height;
	}
};

float Cylinder ::radius = 0;
float Cylinder ::height = 0;

int Cube ::area = 0;

int main()
{
	Cube obj1;
	obj1.getVolumeOfCube();
	Cylinder obj2;
	obj2.getVolume();
	return 0;
}