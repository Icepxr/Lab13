#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double x[],int n,double y[]){
    double sum=0;
    double A=x[0];
    double B=x[0];
    for(int i=0;i<n;i++){
        sum += x[i];
    }
    y[0] = sum/n;
    sum =0;
    for(int i=0;i<n;i++){
        sum += pow(x[i]-y[0],2);
    }
    sum = sqrt((1.00/n)*sum);
    y[1] = sum;
    sum=1;
    for(int i=0;i<n;i++){
        sum *=x[i];
    }
    sum = pow(sum,1.00/n);
    y[2] = sum;
    sum =0;
    for(int i=0;i<n;i++){
        sum +=1/x[i];
    }
    y[3] = n/sum;
    for(int i=0;i<n;i++){
        if(A>x[i]) A=x[i];
        if(B<x[i]) B =x[i];
    }
    y[4] = B;
    y[5] = A;
}