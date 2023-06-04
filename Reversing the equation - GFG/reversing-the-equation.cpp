//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            {
            stack<string> st;
            string ans = "";
            for(int i = 0 ; i < s.size() ; i++){
                string temp = "";
                temp.push_back(s[i]);
                while(isdigit(s[i+1]) && isdigit(s[i])){
                    temp.push_back(s[i+1]);
                    i++;
                }
                st.push(temp);
            }
            
            while(!st.empty()){
                string t = st.top();
                ans = ans + t;
                st.pop();
            }
            
            return ans;
}
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends