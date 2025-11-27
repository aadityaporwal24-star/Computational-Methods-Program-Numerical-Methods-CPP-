#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double A[10][10],x[10][10],x_new[10][10],lambda=0.0,max_value;
    int n;
    cout<<"Enter order of matrix:";
    cin>>n;
    cout<<"Enter values of matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }

    //INITIAL VECTOR
    for(int i=0;i<n;i++){
        x[i][0]=1;

    }

    int max_iter=20;
    for(int k=0;k<max_iter;k++){
        for(int i=0;i<n;i++){
            x_new[i][0]=0;
            for(int j=0;j<n;j++){
                x_new[i][0]+=A[i][j]*x[j][0];
            }
        }
    }

    max_value=fabs(x_new[0][0]);
    for(int i=0;i<n;i++){
        if(max_value<fabs(x_new[i][0])){
            max_value=x_new[i][0];
        }
    }

    lambda =max_value;

    for(int i=0;i<n;i++){
        x_new[i][0]=x_new[i][0]/lambda;
    }
    cout<<"Largest eigen value:"<<lambda<<endl;;
    for(int i=0;i<n;i++){
       cout<< x_new[i][0]<<endl;
    }

    return 0;
}