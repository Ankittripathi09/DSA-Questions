#include <bits/stdc++.h>
using namespace std;




class Solution{
    private:
    bool isSafe(int newx,int newy,vector<vector<int>> visited,vector<vector<int>> m,int n){
        if((newx>=0 && newx<n) &&(newy<n && newy>=0) && visited[newx][newy]==0 && m[newx][newy]==1){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> m, int n,vector<string>&ans,int x,int y,vector<vector<int>> visited,string path){
        //base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y]=1;
        
        //left
        int newx=x;
        int newy=y-1;
        if(isSafe(newx,newy,visited,m,n)){
            path.push_back('L');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
         //right
         newx=x;
         newy=y+1;
        if(isSafe(newx,newy,visited,m,n)){
            path.push_back('R');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }

         //down
         newx=x+1;
         newy=y;
        if(isSafe(newx,newy,visited,m,n)){
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
         //up
         newx=x-1;
         newy=y;
        if(isSafe(newx,newy,visited,m,n)){
            path.push_back('U');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        visited[x][y]=0;
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        if(m[0][0]==0){
            return ans;
        }
        string path="";
        int x=0;
        int y=0;
        vector<vector<int>> visited=m;
        
        for(int i=0;i<m.size();i++){
            
            for(int j=0;j<m[i].size();j++){
                visited[i][j]=0;
            }
        }
        
        solve(m,n,ans,x,y,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};

    




int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
