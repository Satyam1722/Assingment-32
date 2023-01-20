#include<iostream>
#include<math.h>
using namespace std;

class Area{
    public:

    Area(){}
    Area(int l,int b)
    {
        cout<<"area is : "<<l*b<<endl;
    }

    Area(int a,int b,int c)
    {
        float s=(a+b+c)/2.0;
        float ar=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"area is : "<<ar<<endl;
    }

    Area(int r)
    {
        cout<<"area is : "<<3.14*r*r<<endl;
    }
};


int main()
{
    
    while(1)
    {
        int choice,a,b,c;
        cout<<"1. Area of Circle "<<endl;
        cout<<"2. Area of Rectangle"<<endl;
        cout<<"3. Area of Triangle "<<endl;
        cout<<"exit with any other key"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"enter radius of circle : ";
            cin>>a;
            Area a1(a);
            break;
            case 2:
            cout<<"enter length and breadth of Reactangle : ";
            cin>>a>>b;
            Area a2(a,b);
            break;
            case 3:
            cout<<"enter three sides of triangle : ";
            cin>>a>>b>>c;
            Area a3(a,b,c);
            break;
            default:
            return 0; 
        }
    }

    return 0;
}
