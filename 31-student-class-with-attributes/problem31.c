#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;
    char grade;

    void displayInfo() const {
        cout << "\nName : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Grade : " << grade << endl << endl;
    }
};

int main() {
    Student student;

    student.name = "Faizan Ali";
    student.age = 18;
    student.grade = 'A';

    cout << "Student Information:";
    student.displayInfo();

    return 0;
}
