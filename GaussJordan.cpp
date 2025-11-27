#include<iostream>
using namespace std;
int main(){
    double A[10][10],I[10][10];
    int n;
    cout<<"Enter Oreder of Matrix:";
    cin>>n;
    cout<<"Enter Values of Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"A["  <<i<< "][" <<j<< "]: ";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            I[i][j]=(i==j)?1:0;
        }
    }

    //Gauss Jordan Method
    for(int i=0;i<n;i++){
        double d=A[i][i];
        for(int j=0;j<n;j++){
            A[i][j]/=d;
            I[i][j]/=d;
        }

        for(int k=0;k<n;k++){
            if(k!=i){
                double x=A[k][i];
                for(int j=0;j<n;j++){
                    A[k][j]-=x*A[i][j];
                    I[k][j]-=x*I[i][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<I[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;



}