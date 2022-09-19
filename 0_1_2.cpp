
#include<bits/stdc++.h>
using namespace std;




class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int s=0;
        int m=0;
        int e=n-1;
        
        while(s<=e && m<=e){
            
            if(a[m]==0){
                swap(a[m++],a[s++]);
            }
            else if(a[m]==2){
                swap(a[m],a[e--]);
                
            }
            else{
                
                m++;
            }
    }
    }
    
};


int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


