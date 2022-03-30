#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double function(float x)
{
    return (1 / (1 + pow(x, 2)));
}

int main()
{
    double a, b, h, sum1 = 0, sum2 = 0;
    int n;
    cout << "\nEnter the first limit : ";
    cin >> a;
    cout << "\nEnter the second limit : ";
    cin >> b;
    cout << "\nEnter the number of strip : ";
    cin >> n;
    cout << "\nThe step size is given by : ";
    h = (b - a) / n;
    cout << h << endl;

    sum1 = function(a) + function(b);
    for (int i = 1; i < n ; i++)
    {
        sum2 = sum2 + (2 * (function(a + (i * h))));
    }

    double In;
    In = (h / 2) * (sum1 + sum2);
    cout << "\nThe required solution is : " << In << endl;
    return 0;
}