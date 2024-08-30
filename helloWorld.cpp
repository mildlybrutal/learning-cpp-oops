#include <bits/stdc++.h>
using namespace std;

int main()
{
  string name, gender;
  int age;
  cin >> name;
  cin >> age;
  cin >> gender;

  for (char &c : name)
    c = toupper(c);
  for (char &c : gender)
    c = toupper(c);

  cout << name << " " << age << " " << gender;
  return 0;
}