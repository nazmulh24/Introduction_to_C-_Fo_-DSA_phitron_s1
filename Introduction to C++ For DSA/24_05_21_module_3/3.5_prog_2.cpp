#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g) //--> Constractor
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }

    Student(int roll, int cls, double gpa) //--> Constractor with... this ...keyword.
    {
        (*this).roll = roll; //-->We can also write... this->roll = roll;
        this->cls = cls;     //--> (*this).cls = cls;
        this->gpa = gpa;     //-->  (*this).gpa = gpa;
    }
};

int main()
{
    Student Nazmul(60, 14, 3.52);
    cout << Nazmul.roll << " " << Nazmul.cls << " " << Nazmul.gpa << endl;
    return 0;
}
