#include<iostream>
using namespace std;

class Base
{
    public:
      int i,j;      //8 bytes

      void fun()
      { cout<<"Inside Base fun\n" ;}

      
      void gun()
      { cout<<"Inside Base gun\n" ;}

      
      void sun()
      { cout<<"Inside Base sun\n" ;}

};

class Derived : public Base
{
    public:
      int x,y;     //16 bytes

    void fun()   //Redefination
    { cout<<"Inside Derived fun\n";}

    void sun()    //Redefination
    { cout<<"Inside Derived sun\n";}

    void run()     //defination
    { cout<<"Inside Derived run\n";}


};
int main()
{
    Base *bp = NULL;

    bp = new Derived();    //UpCasting

    bp->fun();   //Base fun
    bp->gun();   //Base gun
    bp->sun();   //Base sun
    //bp->run();   //Error

    return 0;

}