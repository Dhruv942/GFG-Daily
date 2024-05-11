//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> jugglerSequence(int n) {
        // code here7
            vector<int> result; // Vector to store the sequence
        while (n > 1) {
            result.push_back(n); // Push current number to the sequence
            if (n % 2 == 0)
                n = floor(sqrt(n));
            else
                n = floor(n * sqrt(n));
        }
        result.push_back(1); // Push 1 as the last element of the sequence
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
