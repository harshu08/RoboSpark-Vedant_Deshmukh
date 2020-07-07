#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    float cgpa;
    int *arr = new int[5];

    Student()
    {
        name="student";
        roll=0;
        cgpa=0;
    }

    void getInput()
    {
        cout << "Give the input:\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;
        cout << "Marks: \n";
        for (int i=0; i<5; i++)
        {
            //out of 100
            cout << "Enter marks of subject " << i+1 << " out of 100: ";
            cin >> arr[i];
        }
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }

    int totalMarks(int *arr)
    {
      int total = 0;
      for (int j=0; j<5; j++)
      {
          total += arr[j];
      }
      return total; 
    }

    void calcCGPA(Student &x)
    {
        x.cgpa = (totalMarks(x.arr)/5)/9.5;
    }
};

int main()
{
    Student s;
    s.getInput();
    s.totalMarks(s.arr);
    s.calcCGPA(s);
    s.showDetails();

    return 0;
}
