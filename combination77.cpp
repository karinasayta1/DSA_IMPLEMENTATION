// n = 4  = 2 
// generate combinations without duplicate
// 1,2   1,3   1,4  2,3  2,4   3,4


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void solve(int start, int n, int k, vector<int>& current, vector<vector<int>>& result) {
        
        // Base case
        if (current.size() == k) {
            result.push_back(current);
            return;
        }

        // Try all numbers from 'start' to n
        for (int i = start; i <= n; i++) {
            
            current.push_back(i);                 // choose
            solve(i + 1, n, k, current, result); // explore
            current.pop_back();                  // un-choose (backtrack)
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        vector<vector<int>> result;

        solve(1, n, k, current, result);

        return result;
    }
};

int main() {
    int n, k;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter k: ";
    cin >> k;

    Solution obj;
    vector<vector<int>> answer = obj.combine(n, k);

    cout << "Combinations are:\n";

    for (int i = 0; i < answer.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < answer[i].size(); j++) {
            cout << answer[i][j] << " ";
        }
        cout << "]\n";
    }

    return 0;
}
