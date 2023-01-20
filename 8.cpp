#include<iostream>
using namespace std;

class test
{
    int n;
    int f;

    public:

    test(int n)
    {
        this->n=n;
    }

    test(test &t)
    {
        f=fact(t.n);
    }

    int fact(int n)
    {
        if(n==0||n==1)
        return n;
        else
        return n*fact(n-1);
    }

    int get()
    {
        return f;
    }
};

int main()
{
    test t1(5);
    test t2=t1;

    cout<<"ans is : "<<t2.get()<<endl;
    return 0;


}