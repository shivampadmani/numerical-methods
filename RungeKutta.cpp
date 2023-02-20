//Runge Kutta 4th order method in c++.
#include<iostream>
#include<math.h>
float fun(float x,float y){
    //RHS of differential equation in standard form.
    return pow(x,2) + pow(y,2);
}
int main(){
    std::cout << "Runge-Kutta 4th order Method."<<"\n";
    //Set Boundary condition here.
    float x0 = 1,y0 = 1.2;
    int i;
    //Set Jump gap
    float h =  0.05;
    //Set end limit here.
    float xn = 1.5;
    //Number of steps required.
    int steps = (xn - x0) / h;
    float k1,k2,k3,k4,x_new,y_new;
    y_new = y0;
    for(i=0;i<=steps;i++){
    x_new = x0 + i * h;
    k1 = h * fun(x_new,y_new);
    k2 = h * fun(x_new + (h / 2),y_new + (k1 / 2));
    k3 = h * fun(x_new + (h / 2), y_new + (k2 / 2));
    k4 = h * fun (x_new + h , y_new + k3);
    y_new = y_new + (k1 + 2*k2 + 2*k3 + k4)/6;
    std::cout << y_new << "  ";
    }
}
