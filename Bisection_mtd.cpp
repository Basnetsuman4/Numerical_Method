//Program to illustrate the Bisection method
#include<iostream>
#include<cmath>
using namespace std;

float calcfun(float x)
{
    return (pow(x,3) - (4*x) - 9); // we need to enter the function whose calculation is to be done
}

void Bisection (float f1 , float f2)
{
    double c, Error;
    cout<<"Enter the error tolerance value : ";
    cin>>Error;

    do
    {

        c = (f1 + f2) / 2;

        if(calcfun(c) * calcfun(f1) > 0)  //this function is used to check if the point that is to be taken, include the point that lies between the interval
        {
            f1 = c;
        }
        else
        {
            f2 = c;
        }
    }while(abs(calcfun(c))  > Error  || abs(f2 - f1 ) > Error);

    cout<<"\n\tThe reruired solution is : "<<c<<endl;
    cout<<"\n\tThe function value is : "<<calcfun(c)<<endl;

}


void Checkfun (float f1 , float f2)
{
    if(calcfun(f1) * calcfun(f2)  > 0)
    {
        cout<<"\n\tError detected!!!!"<<endl;
    }

    else if (calcfun(f1) * calcfun(f2)  == 0)
    {
        if(calcfun(f1) == 0 )
        {
            cout<<"\n\tThe required solution of the function is : "<<f1<<endl;
        }

        if(calcfun(f2) == 0 )
        {
            cout<<"\n\tThe required solution of the function is : "<<f2<<endl;
        }
    }
    else
    {
        Bisection(f1 , f2);
    }

}

int main()
{
    float f1 , f2;
    cout<<"\n\tEnter the first interval : ";
    cin>>f1;
    
    cout<<"\n\tEnter the second interval : ";
    cin>>f2;
    Checkfun(f1, f2);

}