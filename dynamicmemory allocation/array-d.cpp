 #include<iostream>
 #include<typeinfo>
 using namespace std;

 int main()
 {

     int length,sum=0;
     cout<<"enter number of students "<<endl;
     cin>>length;
     int *marks = new int[length];
     

     for (int i; i<=length;i++)

     {   
        cout<<"Enter marks of students. "<<endl;
        cin>>*(marks+i);
        cout<<"value of element stored in array are: "<<*(marks+i)<<endl;
        cout<<"actual value stored: "<<marks[i]<<endl;
        cout<<"actual address stored : "<<&(marks[i])<<endl;
        cout<<"adress of " <<i<< " element of array: "<<(marks+i)<<endl;
        cout<<"value stored in pointer in the static memory: "<<marks<<endl;

        sum += *(marks+i);
    }
    cout<<"sum of student marks are: "<<sum<<endl;

     
    


    
     
     
    //  for (int i;i<=length;i++)

    //  {  
    //      cin>>*(marks+i);
    //      sum += *marks+i;
    //      cout<<&marks+i<<endl;


    //  }

    //  cout<<"sum is: "<<sum<<endl;
     return 0;


}
