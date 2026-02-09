#include <iostream>
using namespace std;

void print1ToN(int n) {
    if (n == 0)      // base case
        return;

    print1ToN(n - 1);   // recursive call
    cout << n << " ";   // print while coming back
}

void printNto1(int n) {
    if (n == 0)      // base case
        return;
    cout << n << " ";   // print while coming back
    printNto1(n - 1);   // recursive call
    
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Ascending: ";
    print1ToN(n);

    cout << "\nDescending: ";
    printNto1(n);

    cout << endl;
    return 0;
}
