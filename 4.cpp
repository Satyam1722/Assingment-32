#include<iostream>
using namespace std;

class Addition{
    public:

    int add(int a,int b,int c=0)
    {
        return a+b+c;
    }

    float add(float a,float b,float c=0)
    {
        return (a+b+c);
    }

    double add(double a,double b,double c=0)
    {
        return (a+b+c);
    }
};

int main()
{
    Addition a;

    cout<<"2 + 5 = "<<a.add(2,5)<<endl;
    cout<<"2 + 5 + 3 = "<<a.add(2,5,3)<<endl;
    cout<<"2.6 + 5.2 = "<<a.add(2.6,5.2)<<endl;
    cout<<"2.6 + 5.2 + 4.6 = "<<a.add(2.6,5.2,4.6)<<endl;
    cout<<"2.9 + 5.0 = "<<a.add(2.9f,5.0f)<<endl;
    cout<<"2.9 + 5.0 + 6.1 = "<<a.add(2.9f,5.0f,6.1f)<<endl;
}