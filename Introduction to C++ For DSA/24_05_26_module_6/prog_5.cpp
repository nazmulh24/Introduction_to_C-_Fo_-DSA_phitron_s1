#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }

    void func()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Person nazmul("Nazmul Hossain", 21);

    // cout << nazmul.name << " " << nazmul.age << endl;
    nazmul.func();

    return 0;
}
