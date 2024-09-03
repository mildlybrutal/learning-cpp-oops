#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
	int a;

protected:
	int b;

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
	int mean(Student s)
	{
		return (s.a + s.b) / 2;
	}

	int sum(Student s)
	{
		return s.a + s.b;
	}

	int sub(Student s)
	{
		return s.a - s.b;
	}

	int multiply(Student s)
	{
		return s.a * s.b;
	}

	int divide(Student s)
	{
		if (s.b != 0)
		{
			return s.a / s.b;
		}
		return -1;
	}
};

int main()
{
	Student s;
	Teacher t;
	int n1, n2;
	cin >> n1 >> n2;
	s.setData(n1, n2);
	cout << t.mean(s) << endl;
	cout << t.sum(s) << endl;
	cout << t.sub(s) << endl;
	cout << t.multiply(s) << endl;
	cout << t.divide(s) << endl;
	return 0;
}