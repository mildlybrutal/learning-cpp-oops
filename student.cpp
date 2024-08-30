#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
	string name;
	int age;
	char grade;
	static int count;

	void getDetails(string name, int age, char grade)
	{
		cin >> name >> age >> grade;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Grade: " << grade << endl;
	}

	void incrementCount()
	{
		count++;
	}

	void getCount()
	{
		cout << count << endl;
	}
};

int Student::count = 0;

int main()
{
	string name;
	int age;
	char grade;

	Student stud1;
	stud1.incrementCount();
	Student stud2;
	stud2.incrementCount();
	Student stud3;
	stud3.incrementCount();

	stud1.getDetails(name, age, grade);
	stud2.getDetails(name, age, grade);
	stud3.getDetails(name, age, grade);

	stud1.getCount();
	stud2.getCount();
	stud3.getCount();
	return 0;
}