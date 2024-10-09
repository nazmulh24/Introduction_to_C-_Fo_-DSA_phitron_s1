#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *nazmul = new Person("Nazmul", 21);

    Person *shadhin = new Person("Shadhin", 20);

    cout << nazmul->name << " " << nazmul->age << endl;
    cout << shadhin->name << " " << shadhin->age << endl;

    // nazmul->name = shadhin->name;
    // nazmul->age = shadhin->age;
    // delete shadhin;

    *nazmul = *shadhin;
    delete shadhin;

    cout << nazmul->name << " " << nazmul->age << endl;
    cout << shadhin->name << " " << shadhin->age << endl;

    return 0;
}
