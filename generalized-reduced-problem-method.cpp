// GRG Numerical Technique
// Here we will primarily make code for non linear function with two variables only.Later it will be optimized as per requirement.
#include <iostream>
using namespace std;
#include <math.h>
#include <autodiff/forward/forward.hpp>
using namespace autodiff;
dual f(dual x, dual y, dual z)
{
    return pow(x, 2) + pow(y, 2) + pow(z, 2);
}
int main()
{
    //dual initial[] = {1,2,3}; //initial point (x,y,z)
    int i;
    //Iteration 1
    dual x = 1.0; // the input variable x
    dual y = 2.0; // the input variable y
    dual z = 3.0; // the input variable z
    for (i = 0; i < 2; i++)
    {
        dual x0[] = {x, y, z};
        dual u = f(x, y, z);                              // the output scalar u = f(x, y, z)
        double dudx = derivative(f, wrt(x), at(x, y, z)); // evaluate du/dx
        double dudy = derivative(f, wrt(y), at(x, y, z)); // evaluate du/dy
        double dudz = derivative(f, wrt(z), at(x, y, z)); // evaluate du/dz
        //double del_f[] = {dfdx,dfdy,dfdz};
        cout << "u = " << u << endl;
        cout << "du/dx = " << dudx << endl;
        cout << "du/dy = " << dudy << endl;
        cout << "du/dz = " << dudz << endl;
        double delf1[3] = {dudx, dudy, dudz};
        dual x2[3];
        int j = 0;
        double h = -0.5; //length of interval to cover(determined from nr method)
        for (j = 0; j < 3; j++)
        {
            x2[i] = x0[i] + h * delf1[i];
            cout << x2[i] << endl;
        }
        x = x2[0];
        y = x2[1];
        z = x2[2];
    }
}
