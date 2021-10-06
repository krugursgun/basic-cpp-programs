#include<iostream>
#define SIZE 5
using namespace std;

struct student
{
    int age;
    float avg_marks;
};

int main()  {
    student s[SIZE];
    for (int i = 0; i < SIZE; i ++)
    {
        cout << "Enter student " << i+1 <<"\'s age and average marks" << endl;
        cin >> s[i].age >> s[i].avg_marks;
    }
    for (int i = 0; i < SIZE; i ++)
    {
        cout << "Student " << i+1 << "\'s details: " << endl;
        cout << "Age: " << s[i].age << endl;
        cout << "Average marks: " << s[i].avg_marks << endl;
    }
}
