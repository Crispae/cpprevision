//synatx if(expression){// statement}

#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"Enter any number: "<<endl;
    cin>>number;

    if(number>0){
        cout<<"you enter number greater than 0";
    } else{
        cout<<"Enterd number is negative"<<endl;
    }
    return 0;
}