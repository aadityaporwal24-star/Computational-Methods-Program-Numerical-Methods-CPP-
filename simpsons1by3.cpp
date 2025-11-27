#include<iostream>
using namespace std;
double f(double x){
    return 1/(1+x);
}
int main(){
    int n;
    double a,b,h,sum,I;
    cout<<"Enter L and R for interval [L,R] respectively: ";
    cin>>a>>b;
    cout<<"Enter no. of intervals:";
    cin>>n;
    h=(b-a)/n;

    double x[n+1],y[n+1];
    x[0]=a;
    for(int i=1;i<=n;i++){
        x[i]=x[0]+i*h;
    }
    for(int i=0;i<=n;i++){
        y[i]=f(x[i]);
    }

    sum=y[0]+y[n];
    for(int i=1;i<=n-1;i++){
        if(i%2==0){
            sum=sum+2*y[i];
        }
        else{
            sum=sum+4*y[i];
        }
    }
    I=(h/3)*sum;
    

    cout<<"..........Table......"<<endl;
    cout<<"x :"<<"\t";
    for(int i=0;i<=n;i++){
        cout<<x[i]<<"\t";
    }
    cout<<endl;
    cout<<"y :"<<"\t";
    for(int i=0;i<=n;i++){
        cout<<y[i]<<"\t";
    }
    cout<<endl;


    cout<<"Value Of Integration is :"<<I;

    return 0;
}