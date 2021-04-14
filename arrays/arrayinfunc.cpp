#include<iostream>
using namespace std;

void display(int a);

int main(){

    int n[] = {20,30,40,50,60,70,80,90};
    display(n[7]);
    return 0;

}
void display(int a){
    cout<<a<<endl;
}