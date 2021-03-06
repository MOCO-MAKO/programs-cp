/*
    AUTHOR : SIDDHANT MANZE
    DATE   : 01/03/2021
*/
#include<iostream>
using namespace std;

int main()
{
    long a,b;
    cin>>a>>b;
    long area=a*b;
    long peri=2*(a+b);
    if(area>peri)
    {
        cout<<"Area"<<endl;
        cout<<area<<endl;
    }
    else if(area<peri)
    {
        cout<<"Peri"<<endl;
        cout<<peri<<endl;
    }
    else
    {
        cout<<"Eq"<<endl;
        cout<<area<<endl;
    }
    return 0;
}