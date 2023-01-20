#include<iostream>
using namespace std;

class Rectangle{
    public:
    int area(int a,int b)
    {
        return a*b;
    }

    float area(float a,float b)
    {
        return a*b;
    }
    
    double area(double a,double b)
    {
        return a*b;
    }
};

int main()
{
    Rectangle r;
    cout<<"Area of 5 and 3 is : "<<r.area(5,3)<<endl;
    cout<<"Area of 3.3 and 5.8 is : "<<r.area(3.3f,5.8f)<<endl;
    cout<<"Area of 3.36 and 5.88 is : "<<r.area(3.36,5.88)<<endl;

    return 0;
}