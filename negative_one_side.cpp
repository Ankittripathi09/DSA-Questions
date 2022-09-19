#include <bits/stdc++.h>
using namespace std;

void sortedArray(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(arr[s]<0){
            s++;
        }
        else if(arr[s]>=0){
            swap(arr[s],arr[e--]);
        }
    }
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++ ){
	        cin>>arr[i];
	    }
	 sortedArray(arr,n);
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	}
	return 0;
}