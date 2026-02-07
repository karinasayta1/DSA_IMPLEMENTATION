#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int countbits(int n){
        int count = 0; 
        while(n > 0){
            count += (n & 1);
            n = n >> 1;
        }
        return count;
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;

        for(int hour = 0; hour <= 11; hour++){
            for(int min = 0; min <= 59; min++) {

                int total = countbits(hour) + countbits(min);

                if(total == turnedOn){
                    string time = to_string(hour) + ":";

                    if(min < 10)
                        time += "0";

                    time += to_string(min);

                    result.push_back(time);
                }
            }
        }
        return result;
    }
};

int main() {
    Solution obj;

    int turnedOn = 7;

    vector<string> ans = obj.readBinaryWatch(turnedOn);

    for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
    }

    return 0;
}
