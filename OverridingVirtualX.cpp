//only address mension in this program same as overridingVirtual

#include<iostream>
using namespace std;

class Base
{
    public:
      int i,j;      //8 bytes

      void fun()    //1000
      { cout<<"Inside Base fun\n"; }

      
      virtual void gun()    //2000
      { cout<<"Inside Base gun\n"; }

      
      virtual void sun()     //3000
      { cout<<"Inside Base sun\n"; }

};

class Derived : public Base
{
    public:
      int x,y;     //16 bytes

    void fun()   //4000
    { cout<<"Inside Derived fun\n";}

    void sun()    //5000
    { cout<<"Inside Derived sun\n";}

    virtual void run()     //6000
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