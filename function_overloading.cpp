#include<iostream>
using namespace std;

void add(int a,int b)
{
    cout<<a+b<<endl;
}

void add(int a,int b,int c)
{
    cout<<a+b+c<<endl;
}

int main()
{
    add(2,3);
    add(2,3,5);
    return 0;
}