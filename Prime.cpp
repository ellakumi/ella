#include <iostream>
using namespace std;

int main() 
{
  int n, i;
  bool primenumber = true;
  
  cout<< "Enter a positive integer: ";
  cin  >> n;
  
  for(i = 2; i<= n / 2; ++i)
  {
  	if(n % i == 0)
  	{
  		primenumber = false;
  		break;
  	}
  }	
  if (primenumber)
  	cout<< "Your input is a prime number";
  else
  	cout<< "Your input is not a prime number";
	return 0;
}

