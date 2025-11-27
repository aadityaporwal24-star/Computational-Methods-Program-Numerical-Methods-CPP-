#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double A[10][10],x[10][10],x_new[10][0],new_lambda=0,max_value;

    int n ;
    cout<<"Enter order of matrix:";
    cin>>n;
    cout<<"Enter values of Matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++){
            x[i][0]=1;
        }
    int max_iter=20;
    for(int k=1;k<max_iter;k++){

        //Multiple A*x
        for(int i=0;i<n;i++){
            x_new[i][0]=0.0;
            for(int j=0;j<n;j++){
                x_new[i][0]+=A[i][j]*x[j][0];
            }
        }

        max_value=fabs(x_new[0][0]);
        for(int i=1;i<n;i++){
            if(fabs(x_new[i][0])>max_value){
                max_value=fabs(x_new[i][0]);
            }
        }
        new_lambda=max_value;

        for(int i=0;i<n;i++){
            x[i][0]=x_new[i][0]/new_lambda;
        }
    }


    cout<<"Largest eigen value:"<<new_lambda<<endl;
    cout<<"Eigen vector:"<<endl;
    for(int i=0;i<n;i++){
        cout<<x[i][0]<<endl;
    }
    return 0;
}
