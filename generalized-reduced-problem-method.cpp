// GRG Numerical Technique
// Here we will primarily make code for non linear function with two variables only.Later it will be optimized as per requirement.
#include <iostream>
#include <math.h>
#include <utility> 
#include "newton-rapston-method.cpp"
using namespace std;
float objfun(float x, float y)
{
    float z;
    z = pow(x, 2) + pow(y,2) + 2 * x + 5;
    return z;
}
float derivativeobj(float x, float y)
{
    float z;
    z = 2 * x + 2 * y + 2;
    return z;
}
float partdelx(float x, float y)
{
    float delz_wrtx;
    delz_wrtx = 2 * x + 2;
    return delz_wrtx;
}
float partdely(float x, float y)
{
    float delz_wrty;
    delz_wrty = 2 * y;
    return delz_wrty;
}

int nrmethod()
{

}

float main()
{
    float set[2];
    // give initial value.
cout<<"give initial guess coordinates.";
cin>> set[0] >> set[1];
    // therefore our initial value is (x,y)=(2,1)
    //now we will evaluate partial derivate at these points.
    float delz_wrtx, delz_wrty, value[50][2];
    float delf[2], h = 0;
    delz_wrtx = partdelx(set[0], set[1]);
    delz_wrty = partdely(set[0], set[1]);
    delf[0] = delz_wrtx;
    delf[1] = delz_wrty;
    int i, j;
    float nextvalue[2];
    for (j = 0; j < 50; j++)
    {
        for (i = 0; i < 2; i++)
        {
            nextvalue[i] = set[i] + (h * delf[i]);
            value[j][i] = nextvalue[i];  
        }
    }
}
}
