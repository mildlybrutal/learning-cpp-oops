#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee {
  virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee {
private:
  string Name;
  string Company;
  int Age;

public:
  void setName(string name) { Name = name; }
  string getName() { return Name; }

  void getCompany(string company) { Company = company; }
  string getCompany() { return Company; }

  void setAge(int age) {
    if (age >= 18) {
      Age = age;
      cout << "Age is valid" << endl;
    } else {
      cout << "Age is not valid" << endl;
    }
  }
  int getAge() { return Age; }
  void introduceYourself() {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  Employee(string name, string company,
           int age) { // Constructor recieves the parameters here
    Name = name;
    Company = company;
    Age = age;
  }
};

int main() {
  Employee employee1 =
      Employee("Akash", "Google", 18); // Variable of Employee class
  // employee1.introduceYourself();       // Calling the function of Employee
  // class
  Employee employee2 = Employee("Sourav", "Amazon", 20);
  // employee2.introduceYourself();

  employee1.setAge(15);
  cout << employee1.getName() << " is " << employee1.getAge() << " years old."
       << endl;
  return 0;
}
