#include <iostream>
using namespace std;

    int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long ans = -1;
       while(s<=e){
        long long m = s + (e-s)/2;
        long long  sq = m * m;

        if(sq == x){
            ans = m;
            return m;
        }
        else if(sq<=x){
            
            ans = m;
            s = m+1;
        }
        else{
            e = m - 1;
        }
       }
       return ans;
    }

    double moreprecision(int n, int p, int temp){
        double factor = 1;
        double ans = temp;

        for(int i = 0 ; i<=p; i++){
            factor = factor/10;

            for(double j = ans; j*j<n; j=j+factor){
                ans=j;
            }
            
        }
        return ans;
    }
int main(){

    int n;
    cin>>n;
    int temp = mySqrt(n);
    double precision = moreprecision(n, 3, temp);
    cout<<precision;
}