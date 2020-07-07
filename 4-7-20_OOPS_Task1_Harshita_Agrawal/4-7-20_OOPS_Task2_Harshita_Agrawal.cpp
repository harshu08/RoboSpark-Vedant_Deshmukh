#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    Student(string n)
    {
        name = n;
    }
};

void showRank(int rank)
{
    cout << "Rank = " << rank << endl;
}

void showRank(Student &x)
{
    cout << "Student name = " << x.name << endl;
    cout << "No rank";
}

void showRank(Student &x, int rank)
{
    cout << "Student name = " << x.name << endl;
    cout << "Rank = " << rank << endl; 
}

int main()
{
    Student s("Harshita");
    int r = 1;
    showRank(r);
    showRank(s);
    showRank(s,r);

    return 0;
}
    