#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
   void solve(vector<int>nums,vector<int>output,
                             int index,  vector<vector<int>>& ans
                             ){
        
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        
        //exclude
        solve(nums,output,index+1,ans);
        
        //include
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
        
    }
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};

int main(){
     int size;
     cin>>size;

     vector<int>nums;

     for (int i = 0; i < size; i++)
     {
        int temp;
        cin>>temp;
        nums.push_back(temp);

     }

     Solution obj;
     vector<vector<int>> ans = obj.subsets(nums);

     for (int i = 0; i <ans.size(); i++)
     {
        cout<<"{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j];
        }
       cout<<"}";
     }
         
    return 0;
}