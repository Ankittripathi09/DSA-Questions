#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums,vector<vector<int>>& ans,int index ){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        for(int i=index;i<nums.size();i++){
               
            swap(nums[index],nums[i]);
            
            solve(nums,ans,index+1);
            
            //backtraking
            
            swap(nums[index], nums[i]);
        
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index =0;
        solve(nums,ans,index);
        return ans;
    }
};

int main(){

int n;
cin>>n;

vector<int>nums;

for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    nums.push_back(temp);
}

Solution obj;

vector<vector<int>> ans=obj.permute(nums);

sort(ans.begin(),ans.end());

for (int i = 0; i < ans.size(); i++)
{
    for (int j = 0; j < ans[i].size(); j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    
}



    return 0;
}