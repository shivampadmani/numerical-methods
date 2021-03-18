// GRG Numerical Technique
// Here we will primarily make code for non linear function with two variables only.Later it will be optimized as per requirement.
#include <iostream>
using namespace std;
#include <math.h>
#define n 50
#include "forward.hpp"
using namespace autodiff;
dual f(dual x, dual y)
{

    return pow(x, 2) + pow(y, 2) + 2 * x + 4;
}
int main()
{
    
    //Suppose initial value first
    dual x = 2.0; // the input variable x
    dual y = 1.0; // the input variable y
    dual u = f(x, y);//call function
    int i,j;
    dual val[n][2];
    val[0][0] = x;
    val[0][1] = y;
cout<<"First initialized value are : \n" <<endl;
    cout <<"x0 = "<< val[0][0] << endl;
    cout <<"y0 = "<< val[0][1] << endl;

    
for (i=0;i<1;i++){      //outer loop to iterate our values
//cout<<"\n Next value"<<val[i][1]<<" , " << val[i][2] <<endl;
}
  
    double    p = (double)val[i][0];
double q = (double)val[i][1];
    double dudx = derivative(f, wrt(x), at(x, y));
    double dudy = derivative(f, wrt(y), at(x, y));

    cout << "u = " << u << endl;        // print the evaluated output u
    cout << "du/dx = " << dudx << endl; // print the evaluated derivative du/dx
    cout << "du/dy = " << dudy << endl; // print the evaluated derivative du/dx
    //to calculate gradient, evaluate partial derivaties at those point.
    double delu[2] = {dudx,dudy};

}
