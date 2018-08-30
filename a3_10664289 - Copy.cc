#include <iostream>
using namespace std;
int main()
{


   int mark=0;
   cout <<"enter your exam mark \n";
   cin>>mark;
   
   if (mark>=80&&mark<=100)
   {
   	cout<<"A";
   }
   else if(mark>=75&&mark<=79)
   {
   	cout<<"B+";
	} 
	else if (mark>=70&&mark<=74)
	{
		cout<<"B";
	}
	else if (mark>=65&&mark<=69)
	{
		cout<<"C+";
	}
	else if (mark>=60&&mark<=64)
	{
		cout<<"C";
	}
	else if (mark>=55&&mark<=59)
	{
		cout<<"D+";
	}
	else if (mark>=50&&mark<=54)
	{
		cout<<"D";
	}
	else if (mark>=45&&mark<=49)
	{
		cout<<"E";
	}
	else if (mark>=0&&mark<=44)
	{
		cout<<"F";
	}
	return 0;
	}
