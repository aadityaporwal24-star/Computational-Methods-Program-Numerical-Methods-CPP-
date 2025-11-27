#include<iostream>
#include<vector>
using namespace std;

double langrange(const vector<double> &x,const vector<double> &y, double X){
    int n=x.size();
    double result=0;

    for(int i=0;i<n;i++){
        double term=y[i];
        for(int j=0;j<n;j++){
            if(j!=i){
                term=term*((X-x[j])/(x[i]-x[j]));
            }
        }
         result+=term;
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter no. of data points:"<<endl;
    cin>>n;

    vector<double>x(n),y(n);

    cout<<"Enter data poitnts:-"<<endl;
    for(int i=0 ;i<n;i++){
       cout<<"x["<<  i  <<"]:";
       cin>>x[i];
       cout<<"y["<<  i  <<"]:";
       cin>>y[i];
    }

    double X;
    cout<<"Enter the value to be interpolated:"<<endl;
    cin>>X;

    double langarange_interpolated_value=langrange(x,y,X);
    cout<<"Interpolated value is :"<<langarange_interpolated_value;
    return 0;
}  
