#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        // (*this).name = name;
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person nazmul("Nazmul Hossain", 21);

    cout << nazmul.name << " " << nazmul.age << endl;

    return 0;
}
