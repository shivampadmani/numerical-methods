//find roots of non linear equation using newton rapston method
#include<iostream>
#include<math.h>
#define n 50
using namespace std;
float fun(float x)
{
    float y;
    y= x*x*x - 27;
    return y;
}
float delfun(float x)
{
    float y;
    y = 3*x*x;
    return y;
}
int main()
{
    int i;
float x,y;
float query[n];
//initial guess
query[0]= 100;
cout<<"x"<<0<<" = "<<query[0]<<"\n";
query[1] = query[0] - (delfun(query[0])/fun(query[0]));
float z=1;
for(i=0;i<50;i++)
{
    z = fun(query[i])/delfun(query[i]);
    query[i+1] = query[i] - z;
    cout<<"x"<<i+1<<" = "<<query[i+1]<<"\n";
}
}
