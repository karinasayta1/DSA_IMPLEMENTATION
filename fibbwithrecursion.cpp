#include<iostream>
using namespace std;
 long long fib(int n){
        
    if(n==0) return 0;
    if(n==1) return 1;

    return fib(n-1)+fib(n-2);

    }
int main(){
    int n = 10;
    long long out = fib(n);
    cout<<out<<endl;
}