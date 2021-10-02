#include <iostream>
using namespace std;
int main()
{   int i;
    cout<<"Enter number to check : ";
    cin>>i;
    if (i>=0)
    {if(i%2==0)
        {cout<<i<<" is positive and its even";}
    else
        {cout<<i<<" is positive and its odd";}}
    else if (i<0)
    if(i%2==0)
        {cout<<i<<" is negative and its even";}
    else
        {cout<<i<<" is negative and its odd";}
    return 0;
}