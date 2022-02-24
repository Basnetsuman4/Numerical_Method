//WAP to illustrate the RK2 method 
#include <iostream>
#include <cmath>
using namespace std;

double function(double x, double y)
{
    return ( x+y);
}

int main()
{
    double x0, h, y0, xn, n;
    cout << "Enter the initial point for x :";
    cin >> x0;
    cout << "\nEnter the initial condition for y : ";
    cin >> y0;
    cout << "\nEnter the final point xn : ";
    cin >> xn;
    cout << "\nEnter the number of interval n : ";
    cin >> n;

    h = (xn - x0) / n;

    double a, b, k, k1 , k2;
    a = x0;
    b = y0;

    for (int i = 0; i < n; i++)
    {
        k1 = h * function(a, b);
        k2 = h * function(a + h , b + k1);
        k = (k1 + k2) / 2 ;
        b = b + k;
        a = a + h;
        cout<<" x : "<<a<<"\t"<<" y : "<<b<<endl;
    }

    cout<<"\nThe required approximate value of y is "<<b<<endl;
}