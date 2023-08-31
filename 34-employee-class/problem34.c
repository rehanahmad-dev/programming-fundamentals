#include <iostream>
#include <string>

using namespace std;

class Person {
 protected:
  string name;
  int age;

 public:
  Person(const string& name, int age) : name(name), age(age) {}

  void displayInfo() const {
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

class Employee : public Person {
 private:
  float salary;

 public:
  Employee(const string& name, int age, float salary)
      : Person(name, age), salary(salary) {}

  void displayInfo() const {
    Person::displayInfo();
    cout << "Salary: Rs" << salary << endl << endl;
  }
};

int main() {
  Employee emp("Abdullah", 26, 50000.00);
  emp.displayInfo();

  return 0;
}
