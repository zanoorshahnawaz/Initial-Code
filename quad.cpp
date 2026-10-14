#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double sqrt(double a, double b, double c)
{ double x;
  double B= b*b;
  double y= a*c;
    x= (-b-(sqrt(B+4*y)))/4*a;
   return x;
}
int main ()
{ double a,b,c;
 cout<<"enter a,b and c:"<<endl;
 cin>>a,b,c;
 cout<<" the value of x is:"<<sqrt(a,b,c);
 return 0;
}
	
	