// GRG Numerical Technique
// Here we will primarily make code for non linear function with two variables only.Later it will be optimized as per requirement.
#include <iostream>
#include <math.h>
float objfun(float x, float y)
{
    float z;
    z = pow(x, 2) + pow(y * 2) + 2 * x + 5;
    return z;
}
float partdelx(float x)
{
    float delz_wrtx;
    delz_wrtx = 2 * x + 2;
    return delz_wrtx;
}
float partdely(float y)
{
    float delz_wrty;
    delz_wrty = 2 * y;
    return delz_wrty;
}
float main()
{
    float set[2];
    // give initial value.
    set[0] = 2;//let
    set[1] = 1; // let 
    // therefore our initial value is (x,y)=(2,1)
    //now we will evaluate partial derivate at these points.
    float delz_wrtx,delz_wrty;
    delz_wrtx = partdelx(objfun(set[0],set[1]));
    delz_wrty = partdely(objfun(set[0],set[1]));
    float delz[2];
    delz[0] = delz_wrtx;
    delz[1] = delz_wrty;
    float h;
    
}
