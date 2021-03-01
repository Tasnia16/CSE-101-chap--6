#include<bits/stdc++.h>
using namespace std;
int swap1(int *p,int *q,int*r);
int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    swap1(&a,&b,&c);
    cout<<a<<" "<<b<<" "<<c;
}
int swap1(int *p,int *q,int*r)
{
    int t;
    t=*p;
    *p=*r;
    *r=*q;
    *q=t;
}
