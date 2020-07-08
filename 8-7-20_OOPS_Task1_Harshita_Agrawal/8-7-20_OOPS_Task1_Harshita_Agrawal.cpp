#include<bits/stdc++.h>
using namespace std;

class personal
{
    protected:
    string name;
    string surname;
    string address;
    long long int mobile_no;
    string dob;

    public:
    personal()
    {
        name = "default";
        surname = "default";
        address = "abc";
        mobile_no = 0000000000;
        dob = "01/01/2000";
    }

    void input_personal();
       
};

void personal::input_personal()
{
    cout << "Enter name: " << endl;
    cin >> name;
    cout << "Enter surname: " << endl;
    cin >> surname;
    cout << "Enter address: " << endl;
    cin >> address;
    cout << "Enter mobile number: " << endl;
    cin >> mobile_no;
    cout << "Enter DOB (DD/MM/YYYY): " << endl;
    cin >> dob;
}

class professional
{
    protected:
    string name_of_organization;
    string job_profile;
    string project;
    
    public:
    professional()
    {
        name_of_organization = "TRF";
        job_profile = "Admin";
        project = "Robospark";
    }

    void input_professional();
};

void professional::input_professional()
{
    cout << "Enter name of organization: " << endl;
    cin >> name_of_organization;
    cout << "Enter job profile: " << endl;
    cin >> job_profile;
    cout << "Enter project: " << endl;
    cin >> project;
}

class academic
{
    protected:
    int passing_year;
    float cgpa;
    string college_name;
    string branch;
    
    public:
    academic()
    {
        passing_year = 2020;
        cgpa = 10;
        college_name = "VIT";
        branch = "Computer Science";
    }

    void input_academic();
};

void academic::input_academic()
{
    cout << "Enter passing year: " << endl;
    cin >> passing_year;
    cout << "Enter CGPA: " << endl;
    cin >> cgpa;
    cout << "Enter name of college: " << endl;
    cin >> college_name;
    cout << "Enter branch name: " << endl;
    cin >> branch;
}

class biodata : public personal , public professional , public academic
{
    public:
    void display()
    {
        cout << "Personal Data : " << endl << endl;
        cout << "Name : " <<  name << endl;
        cout << "Surname : " << surname << endl;
        cout << "Address : " << address << endl;
        cout << "Mobile number : " <<  mobile_no << endl;
        cout << "Date of birth : " << dob << endl << endl;

        cout << "Professional data : " << endl << endl;
        cout << "Name of organization : " << name_of_organization << endl;
        cout << "Job profile : " << job_profile << endl;
        cout << "Project : " << project << endl << endl;

        cout << "Academic data : " << endl << endl;
        cout << "Passing year : " << passing_year << endl;
        cout << "CGPA : " << cgpa << endl;
        cout << "Name of college: " << college_name << endl;
        cout << "Branch name: " << branch << endl << endl;
    }

    void call()
    {
        input_personal();
        input_professional();
        input_academic();
    }
};

int main()
{
    biodata mine;
    mine.call();
    mine.display();

    return 0;
}