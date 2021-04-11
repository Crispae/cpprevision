#include<iostream>
using namespace std;

int main(){

    int x=10;
    int & y = x; // & sign is used to denote the memory location of a variable
    cout<<x<<" "<<y<<endl;
    y = 89;
    cout<<x<<" "<<y<<endl;
    return 0;





}