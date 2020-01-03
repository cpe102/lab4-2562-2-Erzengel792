#include<iostream>
using namespace std;

int findDivisor(int a){
   int b = 2;
   if(a > 1){
       while(b<=a){
           if(a%b==0){
               return b;
           }else{
               b++;
           }
   }
        }else{
    return 1;
     }
}
int main(){
    cout<<"Result1 = "<<findDivisor(10)<<"\n";
    cout<<"Result2 = "<<findDivisor(97)<<"\n";
    cout<<"Result3 = "<<findDivisor(27)<<"\n";

}
