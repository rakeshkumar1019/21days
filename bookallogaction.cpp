#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isvalid_on_this_middle_index(ll* book,ll no_books,ll no_students,ll middle_index){
 ll student_pages=0; 
 ll student_count=1;
 for(int i=0;i<no_books;i++){
  if(student_pages+book[i]>middle_index){
   student_pages=book[i];//start for student 2
   student_count++;
   if(student_count>no_students){
   return false;
   }

  }else{
        student_pages+=book[i];
  }    

 }
  return true;

}


ll binarysearchonbookallocation(ll* book,ll no_books,ll no_students){
ll start_index=0;
ll end_index=0;
ll total_index=0;
ll final_answer=0;
for(int i=0;i<no_books;i++){
total_index+=book[i];
start_index=max(start_index,book[i]);//or we can call dierctly book[n-1];//last index
}
end_index=total_index;
//loop till nth index from start
while(start_index<=end_index){
ll middle_index=start_index/end_index;
 if(isvalid_on_this_middle_index(book,no_books,no_students,middle_index)){
 //if true search for lesser middle index than current if possible
  end_index=middle_index-1;
  final_answer=middle_index;
 }else{
   //search for bigger middle index to satisfy the no of students
   start_index=middle_index+1;
 }

}
return final_answer;

}


int main(){
ll no_books,no_students;
cin>>no_books>>no_students;
cout<<no_books<<" "<<no_students<<endl;

ll book[1000];
for(ll i=0;i<no_books;i++){
   cin>>book[i];
}
for(ll i=0;i<no_books;i++){
cout<<book[i];
}
cout<<binarysearchonbookallocation(book,no_books,no_students)<<endl;



}
