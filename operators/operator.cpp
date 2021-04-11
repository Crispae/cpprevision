//+ - * / % arathematic operator
//++a increment operator
//--a decrement operator

// relational opeartor
/* 

== != a<b a<=b a>b a>=b relational

true,false logical

bitwise operator & !^ ~

other operator sizeof ",""


*/

#include<iostream>
using namespace std;

int main() {

int a=20;
int b =5;
int c;

c=a-b;
cout<<"Line 1 value of c is: "<<c<<endl;
c=a/b;
cout<<"Line 2 value of c is: "<<c<<endl;
c=a%b;
cout<<"Line 3 value of c is: "<<c<<endl;
c = a*b;
cout<<"Line 4 value of c is: "<<c<<endl;
c = c++;
cout<<"Line 5 value of c is: "<<c<<endl;
c = c--;
cout<<"Line 6 value of c is: "<<c<<endl;

return 0;

}