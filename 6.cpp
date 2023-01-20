#include<iostream>
using namespace std;

class A {
  public:

  A(){
    cout<<"this is defualt constructor "<<endl;
  }


};

class B : public A 
{
    public:
    
    B() : A()
    {
        cout<<"default consturctor of derived constuctor "<<endl;;
    }

};

class C : public B
{
    public:

    C() : B()
    {
        cout<<"default constructor of grand derived constructor "<<endl;
    }

};

int main()
{
    C c;
    return 0;
}