#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. data points:";
    cin>>n;

    double x[20],y[20];
    for(int i=0;i<n;i++){
        cout<<"Enter x and y data point"<<i+1<<":";
        cin>>x[i]>>y[i];
    }

    double xp;
    cout<<"Enter Value of x that is to be interolated:";
    cin>>xp;
    
    double yp;
    yp=0.0;

    for(int i=0;i<n;i++){
        double p=1.0;
        for(int j=0;j<n;j++){
            if(j!=i){
                p=p*((xp-x[j])/(x[i]-x[j]));
            }

        }
        yp+=p*y[i];
    }

    cout<<"Interpolated value of y is:"<<yp;

    return 0 ;
}