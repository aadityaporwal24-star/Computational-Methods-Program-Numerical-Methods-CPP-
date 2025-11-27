#include<iostream>
#include<cmath>
using namespace std;
double f(double x){
    double y=x*x-2;
    return y;
}

double derivef(double x){
    double y=2*x;
    return y;
}

int main(){
    double x0,x1,E;
    E=0.0001;
    
    cout<<"Enter Initial guess:";
    cin>>x0;

    int iter=0,maxiter=100;
    while(iter<maxiter){
        x1=x0-f(x0)/derivef(x0);
        if(fabs(x1-x0)<E){
            break;
        }
        x0=x1;
        iter++;
    }
    cout<<"Root is approximately"<<x1<<endl;
    cout<<"Found in "<<iter<<"iterations";

    return 0;
}