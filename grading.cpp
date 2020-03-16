#include<iostream>
using namespace std;
int main()
{
int m;
char grade;
cout<<"Enter mark:";
cin>>m;
if(m<0 && m>100)
grade='Y';
else if(m>69 && m<=100)
grade='A';
else if(m>59 && m<70)
grade='B';
else if(m>49 && m<60)
grade='C';
else if(m>39 && m<50)
grade='D';
else if(m>0 && m<40)
grade='F';
else 
cout<<m<<"is invalid\n";
cout<<"mark:"<<m<<endl;
cout<<"grade:"<<grade<<endl;
}
