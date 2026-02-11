#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     string s = "abc";
     sort(s.begin(), s.end());
     int n = s.length();

     vector<string> result;

     for(int i = 0; i<(1<<n); i++){
        string comb ="";
        for(j=0; j<n; j++){
            if(i & (1 << j)){
                comb += s[j];
            }
        }

        result.push_back(comb);
     }

     sort(result.begin(), result.end());

    for(string x : result)
        cout << x << " ";

    return 0;
}
