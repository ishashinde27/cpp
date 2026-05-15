#include<iostream>
using namespace std;

class Base
{
    protected:
       int i,j;

   public:
    Base()
   {
      cout<<"inside Base Constructor\n";
      i = 0;
      j = 0;
   }

    ~Base()
     {
       cout<<"Inside Base Destructor\n";
     }

    void fun()
    {
       cout<<"Inside Base fun\n";
    }
};

class Derived : public Base
{
   public:
     int x;

     Derived()
     {
        cout<<"Inside Derived Constructor\n";
        x = 0;
     }

     ~Derived()
     {
        cout<<"Inside Dervide Destructor\n";
     }

     void gun()
     {
        cout<<"Inside gun of Derived\n";
     }

};

int main()
{

   cout<<"Inside main\n";

    Derived dobj;  

    cout<<"size of Base class object is :"<<sizeof(Base)<<"\n";           //8
    cout<<"size of Derived class object is :"<<sizeof(Derived)<<"\n";    //12

    //cout<<dobj.i<<"\n";   //error
    //cout<<dobj.j<<"\n";   //error
    cout<<dobj.x<<"\n";   //0

    
    cout<<"End of main\n";

    return 0;
}