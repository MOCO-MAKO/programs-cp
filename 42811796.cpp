/*
    AUTHOR : SIDDHANT MANZE
    DATE   : 15/02/2021
*/
#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,first;
        cin>>n;
        ll last=n%10;
        while(n>0)
        {
            first=n%10;
            n=n/10;
        }
        ll sum=last+first;
        cout<<sum<<endl;
    }
    return 0;
}