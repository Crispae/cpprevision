#include<iostream>
using namespace std;


int main()
{
    char input,alpha='A';
    cout<<"Enter the uppercasecharacter you want: "<<endl;
    cin>>input;
    for (int i=1;i<=(input-'A');i++)
    {

        for(int j =1;j<=i;j++)
        {
            cout<<alpha;
        }

        alpha++;
        cout<<endl;

        


    }




    return 0;
}