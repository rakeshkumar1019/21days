#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Tree{
public:
Tree* left;
Tree* right;
int data;
Tree(int data){
this->data=data;
left=right=NULL;
}
};
void preorder(Tree* root){
if(root){
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}
}

Tree*  merge(Tree* root,Tree* root1){
if(root==NULL){
return root1;
}
if(root1==NULL){
return root;
}
root->data+=root1->data;
root->left=merge(root->left,root1->left);
root->right=merge(root->right,root1->right);
return root;


}
int main(){
Tree* root=new Tree(10);
root->left=new Tree(20);
root->right=new Tree(30);
root->left->left=new Tree(40);
root->left->right=new Tree(50);
root->right->left=new Tree(60);
root->right->right=new Tree(70);
cout<<" preorder on tree1 "<<endl;
preorder(root);
cout<<endl;
Tree* root1=new Tree(80);
root1->left=new Tree(90);
root1->right=new Tree(100);
root1->left->left=new Tree(10);
root1->left->right=new Tree(20);
root1->right->left=new Tree(5);
root1->right->right=new Tree(6);
root1->left->left->left=new Tree(7);
cout<<" preorder on tree 2"<<endl;
preorder(root1);
merge(root,root1);
cout<<endl;
cout<<"after merging od tree1 and tree2  "<<endl;
preorder(root);
cout<<endl;
}
