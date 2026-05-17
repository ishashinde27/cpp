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

    void run()     //defination
    { cout<<"Inside Derived run\n";}


};
int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    return 0;

}