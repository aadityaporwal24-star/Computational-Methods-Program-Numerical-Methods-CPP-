#include<iostream>
using namespace std;

 double f(double x){
    return 1/(1+x);
 }
int main(){
    double a,b;
    cout<<"Enter intervals [L,R] respectively:";
    cin>>a>>b;
    int n;
    cout<<"Enter no. of intervals:";
    cin>>n;
    double x[n+1],y[n+1];

    double h=(b-a)/n;
    x[0]=a;
    for(int i=1;i<=n;i++){
       x[i]=x[0]+i*h;
    }
    for(int i=0;i<=n;i++){
       y[i]=f(x[i]);
    }
    
    double sum=y[0]+y[n];
    for(int i=1;i<=n-1;i++){
        sum=sum+2*y[i];
    }
    double I;

    I=(h/2)*(sum);
    cout<<"Value of Integration is:"<<I;


}

