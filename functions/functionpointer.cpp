 #include<iostream>
 using namespace std;

 void swap(int & n1,int & n2);
 int main()
 { 
     int a = 100;
     int b =200;
     cout<<"Value before swapping"<<endl;
     cout<<"value of a is: "<<a<<endl;
     cout<<"value of b is: "<<b<<endl;

     swap(a,b);
    cout<<"Value after swapping"<<endl;
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;




    return 0;
 }
void swap(int  & n1,int & n2)
 {
     int temp;
     temp = n1;
     cout<<n1<<endl;
     cout<<temp<<endl;
     n1 = n2;
     n2 = temp;
     cout<<temp<<endl;
 }