#include<iostream>
using namespace std;

int main(){
    int i,j;

    for (i=2;i<100;i++)
    {
        for (j=2;j<(i/j);j++)
        {
            if (!i%j)
            {
                break
            }
        }
    }
}