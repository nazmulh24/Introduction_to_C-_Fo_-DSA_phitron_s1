#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[20];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b;

    // a.roll = 2203060;
    // a.cgpa = 3.52;

    // char temp[20] = "Nazmul Hossain";
    // strcpy(a.name, temp);

    cin.getline(a.name, 20);
    cin >> a.roll >> a.cgpa; //--> For a input.
    getchar();               //--> Avoid error.. Enter
    cin.getline(b.name, 20);
    cin >> b.roll >> b.cgpa; //--> For b input.

    cout << a.name << " " << a.roll << "" << a.cgpa << endl;
    cout << b.name << " " << b.roll << "" << b.cgpa << endl;
    return 0;
}
