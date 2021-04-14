#include<iostream>
using namespace std;

int main(){

    int var[] ={100,200,300};
    int *ptr;
     ptr = var;
     cout<<ptr;
     cout<<*ptr;

     for (int i;i<=2;i++)
     {
         cout<<"Adress of var["<<i<<"]";
         cout<<ptr<<endl;

         cout<<"value of var["<<i<<"]";
         cout<<*ptr<<endl;

         ptr++;
     }
    return 0;

}