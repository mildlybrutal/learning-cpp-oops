#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
  virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
{
private:
  string Name;
  string Company;
  int Age;

public:
  void setName(string name) { Name = name; }
  string getName() { return Name; }

  void getCompany(string company) { Company = company; }
  string getCompany() { return Company; }

  void setAge(int age)
  {
    if (age >= 18)
    {
      Age = age;
      cout << "Age is valid" << endl;
    }
    else
    {
      cout << "Age is not valid" << endl;
    }
  }
  int getAge() { return Age; }
  void introduceYourself()
  {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  Employee(string name, string company,
           int age)
  { // Constructor recieves the parameters here
    Name = name;
    Company = company;
    Age = age;
  }

  void AskForPromotion()
  {
    if (Age >= 30)
    {
      cout << "Promoted" << endl;
    }
    else
    {
      cout << "Not Promoted" << endl;
    }
  }
};

class Developer : public Employee
{
public:
  string favProgLanguage;
  Developer(string name, string company, int age, string favProgLanguage)
      : Employee(name, company, age)
  {
    favProgLanguage = favProgLanguage;
  }
  void fixBug()
  {
    cout << getName() << " fixed bug using " << favProgLanguage << endl;
  }
};
int main()
{
  // Employee employee1 =
  //     Employee("Akash", "Google", 18); // Variable of Employee class
  // // employee1.introduceYourself();       // Calling the function of
  // Employee Employee employee2 = Employee("Sourav", "Amazon", 35);
  Developer d = Developer("Akash", "Amazon", 22, "JS");
  d.fixBug();
  return 0;
}
