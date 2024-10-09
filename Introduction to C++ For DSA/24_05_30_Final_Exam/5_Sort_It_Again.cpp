#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    if (a.eng_marks > b.eng_marks)
        return true;
    else if (a.eng_marks < b.eng_marks)
        return false;
    else
    {
        if (a.math_marks > b.math_marks)
            return true;
        else if (a.math_marks < b.math_marks)
            return false;
        else
        {
            if (a.id < b.id)
                return true;
            else
                return false;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id >> ar[i].math_marks >> ar[i].eng_marks;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;

    return 0;
}
