//WAP to illustrate the Euler method 
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

    double a, b, k = 0;
    a = x0;
    b = y0;

    for (int i = 0; i < n; i++)
    {
        k = h * function(a, b);
        b = b + k;
        a = a + h;
        cout<<" x : "<<a<<"\t"<<" y : "<<b<<"\t"<<" x+y : "<<function(a,b)<<"\t"<<" new y : "<<k+b<<endl;
    }

    cout<<"\nThe required approximate value of y is "<<b<<endl;
}