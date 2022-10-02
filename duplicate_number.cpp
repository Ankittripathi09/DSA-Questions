#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int element=-1;
        int ans=-1;
        int count=1;
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=element){
               element=nums[i];
           }
           else{
                  count++;
               if(count==2){
                    ans=nums[i];
                   break;
               
               }
           }
           
    }
        
        return ans;
    }
};


int main(){
int n;cin>>n;
vector<int>nums;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    nums.push_back(temp);
}

Solution obj;
cout<<obj.findDuplicate(nums)<<" ";


    return 0;
}