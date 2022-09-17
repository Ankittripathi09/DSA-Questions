#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){

int pivot=arr[s];
int count=0;

for (int i = s+1; i <= e; i++)
{
    if (arr[i]<pivot)
    {
        count++;
    }
    
}

int rightIndexOfPivot= s+count;

swap(arr[rightIndexOfPivot],arr[s]);

int i=s;
int j=e;

while (i<=j)
{
    if(arr[i]>pivot){
        swap(arr[i],arr[j--]);
    }
    else if(arr[j]<pivot){
       swap(arr[i++],arr[j]);
    }
    else{
        // i++;
        j--;
    }
}


return rightIndexOfPivot;

}

void quickSort(int arr[], int s, int e){

  if (s>=e)
  {
        return;
  }

  int p= partition(arr,s,e);

  quickSort(arr,s,p-1);
  quickSort(arr,p+1,e);

  

}

int main(){

int arr[7]={9,9,9,8,2,3,-6};
quickSort(arr,0,6);

for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;



    return 0;
}