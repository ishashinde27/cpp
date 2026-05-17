#include<iostream>
using namespace std;

int main()
    {
        int Size = 0;
        float *Marks = NULL;
        int i = 0;  //Loop counter

        cout<<"Enter number of elements :\n";
        cin>>Size;

        //Dynamic memory allocation
        Marks = new float[Size];

        cout<<"enter your marks :\n";

        //Iteration
        //   1     2    3
        for(i=0; i<Size; i++)
        {
            cin>>Marks[i];  //4
        }
        

        cout<<"Enter marks are : \n";

        //   1     2    3
        for(i=0; i<Size; i++)
        {
            cout<<Marks[i]<<"\n";  //4
        }

        delete [] Marks;

        return 0;
    }
