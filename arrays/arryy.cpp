// collection of same dataype  is called array
// array is of 1d 2d and 3d
// the size and type of array cannot be change after decleration
/* 
syntax  data_type array name[array_size]

*/

#include<iostream>
using namespace std;

int main(){
    int marks[3];
    float average;
    cout<<"Enter marks of first student: "<<endl;
    cin>>marks[0];
    cout<<"Enter marks of second student: "<<endl;
    cin>>marks[1];
    cout<<"Enter marks of third student: "<<endl;
    cin>>marks[2];
    average = marks[0] + marks[1] + marks[2];
    average = average/3.0;
    cout<<"The average marks of three students are "<<average<<endl;

    return 0;



}
