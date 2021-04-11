//if,switch,else,break,continue
#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year";
    cin>>year;
    if(year%4==0){
        if(year%100==0)
        {

            cout<<"Year is leap year";
        }
        else
        {
            cout<<"Year is not a leap year";
        }

    }else
    {
        cout<<"Year is not a leap year";
    }
    return 0;

}

