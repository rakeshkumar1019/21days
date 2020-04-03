#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
void bfs(int x ,int n){
      queue<int> q;
      q.push(x);
      while(!q.empty()){
         int temp_no=q.front();
         q.pop();
         if(temp_no<=n){
            cout<<temp_no<<" ";
            int last_digit=temp_no%10;
            if(last_digit==0){
            q.push((temp_no*10)+(last_digit+1));
            }else if(last_digit==9){
            q.push((temp_no*10)+(last_digit-1));
            }else {
             q.push((temp_no*10)+(last_digit-1));
             q.push((temp_no*10)+(last_digit+1));
            }
         }
      }
}
int main(){
int n;
cin>>n;
cout<<"jumping numbers are:"<<endl;
cout<<0<<" ";
for(int i=1;i<=9 && i<=n;i++){
    bfs(i,n);
}

}
