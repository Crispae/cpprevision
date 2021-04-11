#include<iostream>
using namespace  std;

extern int a,b;
extern int c;
extern float f;

// little bit doubt in extern

int main(){

int a,b;
int c;
float f;

a=10;
b=20;
c=a+b;
cout<<c<<endl;
f=90/30;
cout<<f<<endl;
return 0;
}
