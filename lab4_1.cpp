#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    float y, e=2.71828;
    cout<<"Enter X = ";
    cin>>x;
    y = 3*pow(x,3)+2*e+pow(2,2*x+1)+sqrt(pow(x,2)+1);
    cout<<"Result y = "<<y;
    return 0;
}
