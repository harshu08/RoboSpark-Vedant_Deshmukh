#include<bits/stdc++.h>
using namespace std;


class strng
{
	public:
	string str1;
	string str2;
	string add;

	strng()
	{
	add ="";
	cout<<"Enter 1st string :  ";
	cin>>str1;
	cout<<"Enter 2nd string ( will be used for concatenation with first string ): ";
	cin>>str2;
	}
	string operator +(string s);
	string operator *(int n);

};

string strng :: operator *(int n)
{
	for(int i=0;i<n;i++)
	add = add + str1;
    return add;	
}


string strng :: operator + (string s)
{
    add = str1+str2;
    return add;
}

int main()
{
	strng s;
	int i;
	string store;

	store = s.str1 + s.str2 ;
	cout <<"\nResulted string : "<< store << endl;
	
	cout <<"\nEneter a integer : ";
	cin >> i;
    store = s * i;
	cout <<"\nResulted string : "<< store << endl;
    
}