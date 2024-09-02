#include <bits/stdc++.h>
using namespace std;

struct Student
{
	int roll;
	string name;
	int age;
};

class StudentDetails
{
public:
	Student stud1;
	StudentDetails()
	{
		cin >> stud1.roll >> stud1.name >> stud1.age;
	}

	void getDetails()
	{
		cout << stud1.roll << " " << stud1.name << " " << stud1.age;
	}
};

int main()
{
	StudentDetails student;
	student.getDetails();
	return 0;
}

// Student Details roll,name,age using struct and class