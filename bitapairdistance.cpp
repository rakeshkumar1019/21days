#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bitpairdistance(int* arr,int n){
//bits in binary is 32 bit
int res=0;
for(int i=0;i<32;i++){
int no_set=0;
for(int j=0;j<n;j++){
 if(arr[j]&1<<i){
  no_set++;
 }
//formual
//no of set bits* no of unset bits *2 of ith(2^i) bit of all number and add all those number 
}
res+=no_set*(n-no_set)*2;

}
return res;

}
int main(){
int n;
cin>>n;
int* arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<bitpairdistance(arr,n)<<endl;
}
