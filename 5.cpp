#include<iostream>
using namespace std;

class A {
  public:

  A(){
    cout<<"this is defualt constructor "<<endl;
  }

  A(int a)
  {
    cout<<"this is parameterized constructor"<<endl;
  }

  A(int a,int b)
  {
    cout<<"this 2 argument parameterized consturctor"<<endl;
  }
};

class B : public A 
{
    public:
    
    B() : A()
    {
        cout<<"default consturctor of derived constuctor "<<endl;;
    }

    B(int a) : A(a)
    {
        cout<<"parameterized constructor of derived constructor "<<endl;
    }

    B(int a,int b) : A(a,b)
    {
        cout<<"2 argument parameterized consturctor of Derived constructor "<<endl;
    }
};

int main()
{
    B b,b1(3),b2(3,5);
    return 0;
}