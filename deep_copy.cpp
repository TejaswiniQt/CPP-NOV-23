//deep copy
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
        p = new int;
        *p = *(t.p);
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

#include<iostream>
using namespace std;

class test 
{
    public:
    int a,b,*p;
    test()
    {
        p = new int;
    }
    test(test &t)
    {
        a = t.a;
        b = t.b;
        p = new int;
        *p = *(t.p);
    }
};

int main()
{
    test t1;
    t1.a = 1;
    t1.b = 2;
    *(t1.p) = 5;
    cout<<t1.a<<t1.b<<*(t1.p)<<endl;
    test t2 = t1;
    cout<<t2.a<<t2.b<<*(t2.p)<<endl;
    *(t2.p) = 8;
    cout<<t1.a<<t1.b<<*(t1.p)<<endl;
    cout<<t2.a<<t2.b<<*(t2.p)<<endl;
    return 0;
}

*/

/*

#include<iostream>
using namespace std;

class test 
{
    public: 
    int a,b,*p;
    test()
    {
        cout<<"Memory"<<endl;
        p = new int;
    }
    void setdata(int x,int y,int z)
    {
        cout<<"setdata"<<endl;
        a = x;
        b = y;
        *p = z;
    }
    
    void print()
    {
        cout<<"a = "<<a<<", b = "<<b<<", *p = "<<*p<<endl;
    }
    
    test(test &t)
    {
        cout<<"copy cons"<<endl;
        a = t.a;
        b = t.b;
        p = new int;
        *p = *(t.p);
    }
};

int main()
{
    test t1;
    t1.setdata(1,2,3);
    t1.print();
    
    test t2(t1);
    t2.print();
    
    t2.setdata(4,5,6);
    t1.print();
    t2.print();
    return 0;
}

*/