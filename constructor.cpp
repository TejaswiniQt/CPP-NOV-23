//Constructor
#include <iostream>

using namespace std;

class A 
{
  public:
  int a;
  
  A()
  {
      a=10;
      cout<<"default constructor"<<endl;
  }
  A(int x)
  {
      a=x;
      cout<<"Parameterized constructor"<<endl;
  }
};



int main()
{
    A obj1;
    cout<<"a = "<<obj1.a<<endl;
    A obj2(25);
    cout<<"a = "<<obj2.a<<endl;
    
  
    return 0;
}