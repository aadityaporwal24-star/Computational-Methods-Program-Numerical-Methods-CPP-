#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
    return x*x*x-x-1;
}

int main(){
    double x0,x1,x2,E;
    E=0.0001;
    x0=0,x1=2;
    while(fabs(x1-x0)>E){
        x2=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));

        x0=x1;
        x1=x2;
    }
    cout<<"Root is :"<<x2;
    return 0;
}