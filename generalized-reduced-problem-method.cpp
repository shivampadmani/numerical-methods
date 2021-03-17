// GRG Numerical Technique
// Here we will primarily make code for non linear function with two variables only.Later it will be optimized as per requirement.
#include <iostream>
#include <math.h>
#include <utility> 
#include "forward.hpp"
using namespace autodiff;
/*float objfun(float x, float y)
{
    float z;
    z = pow(x, 2) + pow(y,2) + 2 * x + 5;
    return z;
}
float objfunh(float x, float y)
{
    float z;
    z = pow(x+h*y,2) + pow(x+h*y,2) + 2 * (x+h*y) + 5;
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
*/
int main()
{
    
    /*float set[2];
    // give initial value.
cout<<"give initial guess coordinates.";
//cin>> set[0] >> set[1];
set[0]=2;
set[1]=1;//assumed value as initial.
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
       
            pair<float,float> PAIR1;
            PAIR1.first = set[0];
            PAIR1.second = delf[0];
            objfunh(PAIR1.first,PAIR1.second)
             pair<float,float> PAIR2;
            PAIR2.first = set[0];
            PAIR2.second = delf[0];
            objfunh(PAIR2.first,PAIR2.second)
            /*nextvalue[i] = set[i] + (h * delf[i]);
            value[j][i] = nextvalue[i];  
        
    }
}*/

}
