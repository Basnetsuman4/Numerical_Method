#include<iostream>
#include<cmath>
using namespace std;


int main()
{   
    int num , ch;
    float x[num] , y[num], a, b, sumx, sumy, sumxy, sumY, sumxY;
    float sumxx, D, D1, D2;

    cout<<"\tEnter the number of elements : ";
    cin>>num;

    cout<<"\n\tEnter the value of x :\t";
    for(int i=0 ; i<num ; i++)
    {
        cin>>x[i];
         
    }
    

    cout<<"\n\tEnter the value of y :\t";
    for(int j=0 ; j<num ; j++)
    {
        cin>>y[j];
    }

    cout<<"\n\tThe required value for the calculation are : "<<endl;
    for(int i = 0 ; i<num ; i++)
    { 
        sumx  += x[i];
        sumy  += y[i];
        sumxx += pow(x[i],2);
        sumxy += (x[i] + y[i]);
        sumY  += log(y[i]);
        sumxY += (x[i] + log(y[i]));

    }
    
    cout<<"\n\tΣx : "<<sumx<<"\n\tΣy : "<<sumy<<"\n\tΣxy : "<<sumxy<<"\n\tΣxx : "<<sumxx<<" \n\tΣY : "<<sumY<<"\n\tΣxY : "<<sumxY<<endl;

    cout<<"\n\t****Select the form of equation****"<<endl;
    cout<<"\n\t1. Linear Form"<<"\n\t2. Exponential Form"<<endl;
    cin>>ch;

    switch (ch)
    {
    case 1 :
            
            D  = ((num * sumxx) - pow(sumx , 2));
            D1 = ((sumy * sumxx) - (sumx * sumy));
            D2 = ((sumxy * num) - (sumx * sumy));

            cout<<"\n\tThe required solution is : ";
            if(b<0)
            {
                cout<<"\n\ty : "<<a<<" + "<<b<<"x"<<endl;
            }
            else
            {
                cout<<"\n\ty : "<<a<<" - "<<b<<"x"<<endl;

            }
    
    break;
    
    case 2 :

            D  = ((num * sumxx) - pow(sumx , 2));
            D1 = ((sumY * sumxx) - (sumx * sumY));
            D2 = ((sumxY * num) - (sumx * sumY));
            a  = D1 / D;
            a  = exp(a);
            b  = D2 / D;

            cout<<"\n\tThe required solution is : ";
            cout<<"\n\t Y = "<<a<<"x"<<"e^"<<b<<endl;
    break;

    default:
    cout<<"\n\tInvalid Chioce!!!!!!!!!!!!"<<endl;
    break;
    }



return 0;

}