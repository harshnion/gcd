#include<iostream>
using namespace std;

int gcd(int a,int b){
    int i,c;
    for(i=2;i<=a;i++){
        if(a%i==0 and b%i==0){
         c=i;}
    }
    return c;
    
}
int main(){
    int a,b,c;
    cin>>a>>b;
    cout<<gcd(a,b);
}
    
