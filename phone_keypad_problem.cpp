#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(string digits,vector<string>&ans,string output,int index, string mapping[]){
        //base case
        
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        
        int number=digits[index]-'0';
        string value= mapping[number];
        
        for(int i=0;i<value.size();i++){
            
            output.push_back(value[i]);
            
            solve(digits,ans,output,index+1,mapping);
            
            output.pop_back();
            
            
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.size()==0){
            return ans;
        }
        
        solve(digits,ans,output,index,mapping);
        return ans;
        
        
    }
};

int main(){

int t;
cin>>t;
while (t--)
{
    string digits;
    cin>>digits;
    Solution obj;
    vector<string>ans=obj.letterCombinations(digits);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    


}

    return 0;
}