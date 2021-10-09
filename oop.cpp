#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    float avg_marks;

public:
    Student()
    { // default constructor
        roll = 0;
        avg_marks = 0;
    }

    Student(int rollno, float marks)
    { // parameterised constructor - constructor overloaded
        roll = rollno;
        avg_marks = marks;
    }

    void insert(int rollno, float marks)
    {
        roll = rollno;
        avg_marks = marks;
    }

    void display()
    {
        cout << "Student's roll number is " << roll << endl;
        cout << "Student's average marks is " << avg_marks << endl;
        return; // being a void function, it returns nothing
    }

    ~Student()
    {
        cout << "Deleting student object..." << endl;
    }
};

int main()
{
    Student s1(1, 50);
    Student s2;
    s2.insert(2, 75);
    s1.display();
    s2.display();
    return 0;
}