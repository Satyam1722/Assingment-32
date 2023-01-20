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



int main()
{
    B b;
    return 0;
}