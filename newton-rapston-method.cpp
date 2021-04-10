//find roots of non linear equation using newton rapston method
#include<iostream>
#include<math.h>
#define n 50
using namespace std;
float nextvalue(float x)
{
    float y;
    y=56*x*x + 56*x + 14;
    return y;
}
float derivativeofnextvalue(float x)
{
    float y;
    y =2*56*x + 56;
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
query[1] = query[0] - (derivativeofnextvalue(query[0])/nextvalue(query[0]));
float z=1;
float answer;
for(i=0;i<50;i++)
{
    z = nextvalue(query[i])/derivativeofnextvalue(query[i]);
    query[i+1] = query[i] - z;
    if(query[i]==query[i-1])
    answer=query[i];
}
cout<<"Answer is "<<answer<<endl;
}
