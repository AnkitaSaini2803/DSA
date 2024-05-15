//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) 
    {
        vector<int>ans;
        int a=A+B;
        int b=A*B;
        int c,d;
        if(A>B)
        {
            c=A-B;
            d=A/B;
        }
        else
        {
            c=B-A;
            d=B/A;
        }
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        ans.push_back(d);
        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends