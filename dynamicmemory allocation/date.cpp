#include<iostream>
#include<ctime>

using namespace std;

int main(){

    time_t now = time(0);
    char *dt = ctime(&now);

    cout<<"the time_t is: "<<now<<endl;
    cout<<"the dt is: "<<*dt<<endl;
    cout<<"The local date and time is "<<dt<<endl;
    return 0;



}