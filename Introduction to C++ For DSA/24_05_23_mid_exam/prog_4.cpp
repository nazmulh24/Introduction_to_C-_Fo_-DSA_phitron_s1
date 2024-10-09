#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    char Name[101];
    char Sec;
    int Mark;
    Student(int ID, char *Name, char Sec, int Mark)
    {
        this->ID = ID;
        strcpy(this->Name, Name);
        this->Sec = Sec;
        this->Mark = Mark;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student *st[3];
        for (int i = 0; i < 3; i++)
        {
            int id, mark;
            char name[101], sec;
            cin >> id >> name >> sec >> mark;
            st[i] = new Student(id, name, sec, mark);
        }
        Student *max = st[0];
        for (int i = 1; i < 3; i++)
        {
            if (st[i]->Mark > max->Mark)
                max = st[i];
        }

        cout << max->ID << " " << max->Name << " " << max->Sec << " " << max->Mark << endl;
    }
    return 0;
}
