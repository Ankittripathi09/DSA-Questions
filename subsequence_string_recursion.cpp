#include <bits/stdc++.h> 
using namespace std;
void solve(string str,int index,string output,vector<string>&ans){
    //base case

    if(index>=str.size()){
        if(output.length()>0){
             ans.push_back(output);
        }
       
        return;
    }
    
    //exclude 
    solve(str,index+1,output,ans);
    
    //include
    char element= str[index];
     output.push_back(element);
     solve(str,index+1,output,ans);
    
}
vector<string> subsequences(string str){
	
	vector<string>ans;
    int index= 0;
    string output="";
    solve(str,index,output,ans);
    return ans;
	
}
int main(){

string str;
cin>>str;

vector<string>ans=subsequences(str);

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}



    return 0;
}