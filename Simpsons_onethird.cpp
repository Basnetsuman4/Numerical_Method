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
    double a, b, sum1, sum2, sum3, h, In;
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

    if (n % 2 != 0)
    {
        cout << "Further calculation cannot be performed. " << endl;
        cout << "\nThe number of data provided is odd." << endl;
    }
    else
    {
        sum1 = function(a) + function(b);
        for (int i = 1; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                sum2 = sum2 + (2 * (function(a + (i * h))));
            }
            else
            {
                sum3 = sum3 + (4 * (function(a + (i * h))));
            }
        }

        In = (h / 3) * (sum1 + sum2 + sum3);
        cout << "\nThe required solution is : " << In << endl;
    }

    return 0;
}