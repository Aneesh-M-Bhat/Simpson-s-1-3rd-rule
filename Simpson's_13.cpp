//Program to apply Simpson 1/3rd rule

#include<iostream>
using namespace std;

int main()
{
    //Variable declaration and assigning values 
    int n=1;
    float a=1, b=1, arrY[25], res = 0, step;
    cout << "Enter the limits and also the number of segments/divison \n";
    cin >> a>>b>> n;
    step = (b - a) / n;
    cout << "Enter the values of y \n";
    for (int i = 0; i <= n; i++)
    {
        cin >> arrY[i];
    }
    
    //Calculation part
    for (int i = 0; i <= n; i++)
    {
        if (i==0||i==n)
        {
            res += arrY[i];
        }
        else
            if (i % 2 == 0)
            {
                res += arrY[i] * 2;
            }
            else
            {
                res += arrY[i] * 4;
            }
    }
    res = step * res / 3;
    
    //Result display
    cout << "The result is " << res << "\n";
}