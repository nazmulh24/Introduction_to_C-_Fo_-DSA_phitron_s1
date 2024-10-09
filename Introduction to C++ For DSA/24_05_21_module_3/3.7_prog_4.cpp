#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        (*this).roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun() //--> For Dynamic memory...
{
    Student *nazmul = new Student(24, 14, 3.99);
    return nazmul;
}

int main()
{
    Student *ans = fun();

    Student *shadhin = new Student(32, 14, 3.52);                                //--> Dynamic Object...
    cout << shadhin->roll << " " << shadhin->cls << " " << shadhin->gpa << endl; //--> (*shadhin).roll

    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl; //--> (*ans).roll
    delete ans;                                                      //--> Delete element.
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    return 0;
}
