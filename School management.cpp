C++
#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person
{
    string admissionNumber;
    string studentClass;

public:
    void inputDetails()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter admission number: ";
        cin >> admissionNumber;

        cout << "Enter class: ";
        cin >> studentClass;
    }

    void displayStudent()
    {
        cout << "\n------ STUDENT DETAILS ------" << endl;

        displayPerson();

        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main()
{
    Student s;

    s.inputDetails();

    s.displayStudent();

    return 0;
}
