#include<iostream>
using namespace std;

class Arithematic
{
    public:
       int No1;
       int No2;

       Arithematic()
       {
         No1 = 0;
         No2 = 0;
       }

       Arithematic(int value1, int value2)
       {
         No1 = value1;
         No2 = value2;
       }

    int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    int Substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }

};

int main()
{
    Arithematic aobj(11,10);
    int Result = 0;

    Result = aobj.Addition();
    cout<<"Addition is :"<<Result<<"\n";

    Result = aobj.Substraction();
    cout<<"Substraction is :"<<Result<<"\n";

    return 0;
}