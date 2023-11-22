//shallow copy
#include<iostream>
using namespace std;

class test 
{
    private:
    int a,b,*p;
    public:
    test()
    {
        p = new int;
    }
    void setdata(int x,int y,int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    
    void print()
    {
        cout<<a<< b<< *p<<endl;
    }
};

int main()
{
    test t1;
    t1.setdata(1,2,3);
    t1.print();
    test t2 = t1;
    t2.print();
    t2.setdata(4,5,6);
    t2.print();
    t1.print();
    return 0;
}

/*

//shallow copy
#include<iostream>
using namespace std;

class test 
{
    private:
    int a,b,*p;
    public:
    test()
    {
        p = new int;
    }
    test(test &t)
    {
        a = t.a;
        b = t.b;
        p = t.p;
    }
    
    void setdata(int x,int y,int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    
    void print()
    {
        cout<<a<< b<< *p<<endl;
    }
};

int main()
{
    test t1;
    t1.setdata(1,2,3);
    t1.print();
    test t2 = t1;
    t2.print();
    t2.setdata(4,5,6);
    t2.print();
    t1.print();
    return 0;
}

*/