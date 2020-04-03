#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int taprunning(int* arr,int n){
 int* left_most_height=new int[n];
 int* right_most_height=new int[n];
 int* arr1=new int[n];
 left_most_height[0]=arr[0];
  int left=arr[0];
 for(int i=1;i<n;i++){
 left=max(left,arr[i]);   
 left_most_height[i]=left ;
 }
 int right =arr[n-1];
 for(int i=n-2;i>=0;i--){
   right=max(right,arr[i]);
   right_most_height[i]=right;
 } 
  for(int i=0;i<n;i++){
  cout<<left_most_height[i]<<" ";
  }
cout<<endl;
  for(int i=0;i<n;i++){
  cout<<right_most_height[i]<<" "; 
 }
cout<<endl;
  for(int i=0;i<n;i++){
  int temp=min(left_most_height[i],right_most_height[i])-arr[i];
   if(temp>=0){
     arr1[i]=temp;
   }
  }
cout<<endl;
  for(int i=0;i<n;i++){
  cout<<arr1[i]<<" ";
   }
cout<<endl;
  int sum=0;
  for(int i=0;i<n;i++){
   sum+=arr1[i];
  }
  return sum;
 

}
int main(){
int n;
cin>>n;
int* arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

cout<<taprunning(arr,n)<<endl;





}

