#include<iostream>
using namespace std;

class Base
{
    public:
      int i,j;      //8 bytes

};

class Derived : public Base
{
    public:
      int x,y;     //16 bytes
};
int main()
{
    Base *dp = NULL;
    Derived bobj;

    dp = &bobj;    //DownCasting(notallowed)

    return 0;

}