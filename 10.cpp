#include<iostream>
#include<string>

using namespace std;

class Player{
    int player;
    string name;
    int number_of_match;
    int *number_of_goals;

    public:

    Player(){}

    Player(int a,string b,int c){
        player=a;
        name=b;
        number_of_match=c;
        number_of_goals=new int[c];
    }

    void setGoal()
    {
        cout<<"enter "<<number_of_match<<" goals"<<endl;
        
        for(int i=0;i<number_of_match;i++)
        cin>>number_of_goals[i];
    }

    void print()
    {
        cout<<"Player-> "<<player<<endl;
        cout<<"Name-> "<<name<<endl;
        cout<<"Number of match-> "<<number_of_match<<endl;
        cout<<"Number of Goal :: "<<endl;
        for(int i=0;i<number_of_match;i++)
        cout<<number_of_goals[i]<<" ";
        cout<<endl;
        
    }                                                 
};

int main()
{
    Player p(1,"satyam",5);

    p.setGoal();
    p.print();

    return 0;
}