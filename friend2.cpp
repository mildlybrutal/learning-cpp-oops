#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
	int a, b;

public:
	void setData(int n1, int n2)
	{
		a = n1;
		b = n2;
	}

	friend class Teacher;
};

class Teacher
{
	int c;

public:
	int display(Student s)
	{
		return (s.a + s.b) / 2;
	}
};

int main()
{
	Student s;
	Teacher t;
	int n1, n2;
	cin >> n1 >> n2;
	s.setData(n1, n2);
	cout << t.display(s);

	return 0;
}