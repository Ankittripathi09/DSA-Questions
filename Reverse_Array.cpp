
#include<bits/stdc++.h>


using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}





void reverse(int i,int j,string & s){
    if(i>=j){
        return;
    }
    swap(s[i++],s[j--]);
    reverse(i,j,s);
    
}

string reverseWord(string str){
    reverse(0,str.size()-1,str);
    
    return str;
 
}

