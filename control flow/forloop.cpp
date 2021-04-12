// syntax for(initalizer;testexp;updatestatemnet){}

#include<iostream>
using namespace std;

int main(){

    int i,n,fact=1;
    cout<<"Enter a positive integer";
    cin>>n;
    for(i=1;i<=n;i++){
        fact *=i;
        cout<<fact<<endl; 
    }
}