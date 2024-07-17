#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
  string Name;
  string Company;
  int Age;

  void introduceYourself() {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  Employee(string name, string company, int age) {  //Constructor recieves the parameters here
    Name = name;
    Company = company;
    Age = age;
  }
};

int main() {
  Employee employee1 = Employee("Akash", "Google", 18); // Variable of Employee class
  employee1.introduceYourself(); // Calling the function of Employee class
  Employee employee2 = Employee("Sourav", "Amazon", 20);
  employee2.introduceYourself();
  return 0;
}
