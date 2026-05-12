#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access specifier
    public:
    int No1,No2;   //characterstics

    void Fun()     //Behaviour
    {
        cout<<"Inside Fun\n";
    }

    void Gun()     //Behaviour
    {
        cout<<"Inside Gun\n";
    }

};

int main()
{
    //object creation (Instance)for non static variable
    Marvellous mobj1;
    Marvellous mobj2;
 
    cout<<sizeof(mobj1)<<"\n";    //8 byte
    
    cout<<mobj1.No1<<"\n";

    mobj1.Fun();
    mobj2.Fun();

    
    mobj1.Gun();
    //mobj2.Fun();
    return 0;
}