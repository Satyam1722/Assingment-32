#include<iostream>
using namespace std;

class FLOAT {
    float f;
    public:

    FLOAT operator+(FLOAT F)
    {
        FLOAT temp;
        temp.f=f+F.f;
        return temp;
    }

    FLOAT operator-(FLOAT F)
    {
        FLOAT temp; 
        temp.f=f-F.f;
        return temp;
    }
    
    FLOAT operator*(FLOAT F)
    {
        FLOAT temp; 
        temp.f=f*F.f;
        return temp;
    }

    FLOAT operator/(FLOAT F)
    {
        FLOAT temp; 
        temp.f=f/F.f;
        return temp;
    }

    float get()
    {
        return f;
    }

    void set(float f)
    {
        this->f=f;
    }

};

int main()
{
    FLOAT f1,f2,f3;
    f1.set(5.6);
    f2.set(2.0);
    
    f3=f1+f2;
    cout<<"addition is : "<<f3.get()<<endl;

    f3=f1-f2;
    cout<<"subtraction is : "<<f3.get()<<endl;

    f3=f1*f2;
    cout<<"multiplication is : "<<f3.get()<<endl;

    f3=f1/f2;
    cout<<"division is : "<<f3.get()<<endl;

    return 0;


}