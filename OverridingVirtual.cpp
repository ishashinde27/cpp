#include<iostream>
using namespace std;

class Base
{
    public:
      int i,j;      //8 bytes

      void fun()
      { cout<<"Inside Base fun\n"; }

      
      virtual void gun()
      { cout<<"Inside Base gun\n"; }

      
      virtual void sun()
      { cout<<"Inside Base sun\n"; }

};

class Derived : public Base
{
    public:
      int x,y;     //16 bytes

    void fun()   //Redefination
    { cout<<"Inside Derived fun\n";}

    void sun()    //Redefination
    { cout<<"Inside Derived sun\n";}

    virtual void run()     //defination
    { cout<<"Inside Derived run\n";}


};
int main()
{
    Base *bp = new Derived();    //Upcasting

    bp->fun();   //Base fun call
    bp->gun();   //Base gun  call
    bp->sun();   //Derived sun call
    //bp->run();   //Error

    return 0;

}