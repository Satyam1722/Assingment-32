#include<iostream>
using namespace std;

class Animals
{
    public:
    void sound()
    {
    }
};
 
 class Dogs : public Animals
{
    public:

    void sound()
    {
        cout<<"sound of dogs"<<endl;

    }
};

int main()
{
    Dogs d;
    d.sound();
    return 0;
}