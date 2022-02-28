#include <iostream>
#include <cmath>
using namespace std;

float calcfun(float x)
{
    return (pow(x, 3) - (2 * x) - 5);
}



void falsi(float f1, float f2)
{
    float error, m;
    cout << "\nEnter the tolerance value : ";
    cin >> error;

    do
    {
        m = f1 - (((f2 - f1) / (calcfun (f2) - calcfun(f1))) * calcfun(f1)) ;
        if(calcfun(m) * calcfun(f1)  > 0 )
        {
            f1 = m;
        }
        else 
        {
            f2 = m;
        }
        cout<<"! "<<endl;
    }while(abs(calcfun(m)) > error );

cout<<"\n The required root of the equation is : "<<m<<endl;
cout<<"\n The functional value of the equation at "<<m<<" is  : "<<calcfun(m)<<endl;
 
}

float check(float a, float b)
{
    if (calcfun(a) * calcfun(b) > 0)
    {
        cout<< "Error detected!!!!  Product of the funtion at these interval is not less than zero!!!!!!!!" << endl;
    }

    else if (calcfun(a) * calcfun(b) == 0)
    {
        if (calcfun(a) == 0)
        {
            cout << "The required root is : " << a << endl;
        }

        if (calcfun(b) == 0)
        {
            cout << "The required root is : " << b << endl;
        }
    }
    
    else
    {
        falsi( a, b);
    }
}

int main()
{
    float a, b;
    cout << "\nEnter the first interval : ";
    cin >> a;
    cout << "\nEnter the second interval : ";
    cin >> b;

    check(a, b);

    return 0;
}