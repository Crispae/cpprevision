#include<iostream>
using namespace std;

int main(){

    float num[10];

    for(int i; i<=10;i++){
        cout<<"Enter the number: "<<endl;
        cin>>num[i];

    }
    for (int j; j<=10;j++)
    {
        cout<<"Number in the postion num[10]"<<j<<"is:"<<endl;
        cout<<num[j]<<endl;

    }
    return 0;

}
