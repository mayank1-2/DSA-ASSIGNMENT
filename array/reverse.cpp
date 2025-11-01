#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr , int m) {
    // Write your code here      
  int i=m+1;
  int j=arr.size()-1;
  while(i<j){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      i++;
      j--;
  } 	
 
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter eleemts of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    reverseArray(arr,m);
    cout<<"reversed array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}