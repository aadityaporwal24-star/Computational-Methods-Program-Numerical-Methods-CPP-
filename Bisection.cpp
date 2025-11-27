#include<iostream>
using namespace std;

double f(double x){
    double y = x*x*x -x-1;
    return y;
}

int main(){
    double a,b,E,c;
    cout<<"Enter L and R respectively for [L,R]:";
    cin>>a>>b;

    if (f(a)*f(b)>=0){
        cout<<"Bisection method fails!!.......SORRY ....TRY AGAIN....";
        return 0;
    }
    int iter=0,maxiter=1000;
    E=0.0001;
    while((b-a)/2>E && iter<maxiter){
        c=(a+b)/2;
        if(f(a)*f(c)<0) b=c ;
        else a=c;
        iter++;
    }
    cout<<"The Root IS :"<<c;

}