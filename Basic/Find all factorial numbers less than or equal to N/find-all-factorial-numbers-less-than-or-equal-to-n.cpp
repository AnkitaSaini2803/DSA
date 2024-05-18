//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long>ans; //It stores the result or factorial numbers
        long long fact=1;  //bec 1 is everbody's factorial
        int i=2;  //It starts with 2 bec first factorial is already 1 out there 
        while(fact<=N)
        {
            ans.push_back(fact); //First factorial i.e 1 stored in ans
            //Now, to [find the value of next factorial of N.]
            
            fact=fact*i; //fact=1*2=2 ..Now fact=2 is stored in vector/ans..
            i++;   //i becomes i+1-->2+1=3....
        }
        return ans;  //The final output of factorial is shown here...
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends