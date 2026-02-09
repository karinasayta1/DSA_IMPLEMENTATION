#include <iostream>
using namespace std;

double powerofxton(double x, long long n){

    if(n == 0) 
        return 1;

    if(n < 0) 
        return powerofxton(1/x, -n);

    double half = powerofxton(x, n / 2);

    if(n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main(){
    long long n;
    double x = 2.0000;

    cin >> n;

    double c = powerofxton(x, n);
    cout << c;

    return 0;
}
