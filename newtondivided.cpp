#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter no. of data points:";
    cin>>n;

    double x[n],y[n][n];
    cout<<"Enter values for x:"<<endl;
    for(int i=0;i<n;i++){
            cout<<"Enter value:";
            cin>>x[i]  ;
    }
    cout<<"Enter values for y:"<<endl;
    for(int i=0;i<n;i++){
            cout<<"Enter value:";
            cin>>y[i][0];
    }

    //Creating divided difference table
    for(int j=1;j<n;j++){
        for (int i=0;i<n-j;i++){
            y[i][j]=(y[i+1][j-1]-y[i][j-1])/(x[i+j]-x[i]);
        }
    }

    //Take value of x that is to be interpolated
    double X;
    cout<<"Enter value to be interpolated:";
    cin>>X;

    double result=y[0][0];
    double term=1;
    for(int i=1;i<n;i++){
        term=term*(X-x[i-1]);
        result=result+term*y[0][i];
    }

    cout<<"Interpolated value for x="<<X<<"is :"<<result;

    
}