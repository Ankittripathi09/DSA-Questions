
// find Largest sum contiguous Subarray [V. IMP]


#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    
    long long maxSubarraySum(int arr[], int n){
        
        long long ans=arr[0];
        long long currSum=0;
        
        for(int i=0;i<n;i++){
          currSum +=arr[i];
          ans=max(ans,currSum);
          
          if(currSum<0){
              currSum=0;
          }
            
        }
       
        return ans;
        
    }
};



int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

