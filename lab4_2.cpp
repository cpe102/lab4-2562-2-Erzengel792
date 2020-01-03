#include<iostream>

using namespace std;

double findDistance(double u,double a,double t){
double s;
s = u*t+0.5*a*t*t;
return s;
}

int main(){

  cout<<"S1 = "<<findDistance(0,0.5,1)<<"\n";
  cout<<"S3 = "<<findDistance(1.5,-1,2)<<"\n";
  cout<<"S2 = "<<findDistance(5,4,3);
  return 0;
}
