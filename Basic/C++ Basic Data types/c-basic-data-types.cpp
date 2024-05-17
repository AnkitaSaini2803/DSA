//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User functiom template for C++

class Solution {
  public:
    int BasicDataType(string s)
    {
        int size=s.length();
        if(size==1)
        {
            if(isdigit(s[0])) return sizeof(int);
            else return sizeof(char);
        }
        for(int i=0;i<size;i++)
        {
            if(s[i]=='.')
            {
                if(size-i-1>=6)
                return sizeof(double);
                else return sizeof(float);
            }
        }
        return sizeof(int);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.BasicDataType(S) << endl;
    }
}
// } Driver Code Ends