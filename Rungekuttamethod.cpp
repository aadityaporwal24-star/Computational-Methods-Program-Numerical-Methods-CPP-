#include<iostream>
using namespace std;
double f(double x,double y){
    return x*x*x+y;
}
int main(){
    double x0,y0,xn,yn,h,k1,k2,k3,k4,k,n;
    cout<<"Enter initial x0,y0 and step size(h) respectively:";
    cin>>x0>>y0>>h;
    cout<<"Enter value xn to be calcualted:";
    cin>>xn;
    n=(xn-x0)/h;
    for(int i=0;i<n;i++){
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        k=(1.0/6)*(k1+2*k2+2*k3+k4);

        yn=y0+k;


        x0+=h;
        y0=yn;
    }

    cout<<"Value is :"<<yn;
    return 0 ;
    


}