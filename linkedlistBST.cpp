#include"linkedlistBST.h"
#include<iostream>

using namespace std;

node::node(){
    data=0;
    left=right=NULL;
}

node::node(int value){
    data=value;
    left=right=NULL;
}

node::~node(){}


LinkedBST::LinkedBST(){
}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(int data){
}



bool LinkedBST::search(int data){}


void LinkedBST::add(node *root,int data){
if (root->data==0){
    root->data=data;
}else{
        if (data < root->data){
            if (!root->left){ 
                node *newnode=new node(data); 
                root->left=newnode;
            }
            else{
                add(root->left,data);
            }
        }
        else if (data > root->data){
            if (!root->right){ 
                node *newnode=new node(data); 
                root->right=newnode;
            }
            else{
                add(root->right,data);
            }
        }
    }
}

bool LinkedBST::search(node *root,int targetKey){
    if(root->data==0){
        cout<<"It is an empty tree"<<endl;
    }
    else{
        node *p=new node();
        p=root;
        while(p){
            if(targetKey>p->data){
                p=p->right;
            }
            else if(targetKey<p->data){
                p=p->left;
            }
            else if(targetKey==p->data){
                cout<<targetKey<<" is in the tree"<<endl;
                return 1;
                
            }
            else{
                cout<<targetKey<<" is not in the tree"<<endl;
                return 0;
            }
        }
    }
    cout<<targetKey<<" is not in the tree"<<endl;
    return 0;
}


void LinkedBST::preorderTraversal(node* root) { 
    if (!root) 
    return; 
  
    
    cout << root->data << "\t"; 
  
    
    preorderTraversal(root->left);  
  
    
    preorderTraversal(root->right); 
}

void LinkedBST::inorderTraversal(node* root){
	if(!root)
	return;
	
	inorderTraversal(root->left);
	
	cout<<root->data<<"\t";
	
	inorderTraversal(root->right);
	
}  

int LinkedBST::max(){
}

int LinkedBST::min(){
	
}

void LinkedBST::max(node* root){
	if(!root)
		return;
	

	
	if(root->right==NULL){
		cout<<"the max is"<< root->data<<endl;
	}
	else{
		max(root->right);
	}

	
}

void LinkedBST::min(node* root){
	if(!root)
	return;
	
	if(root->left==NULL){
		cout<<"the min is"<<root->data<<endl;
	}
	else{
		min(root->left);
	}
}



int main(){
	LinkedBST s;

	s.add(&s.root,23);
	s.add(&s.root,27);
	s.add(&s.root,3);
	s.add(&s.root,107);
	s.add(&s.root,95);
	s.add(&s.root,64);
	cout<<"Preorder Traversal of the tree is"<<endl;
	s.preorderTraversal(&s.root);
	cout<<endl;
	cout<<endl;
	cout<<"Inorder Traversal of the tree is"<<endl;
	s.inorderTraversal(&s.root);
	cout<<endl;
	cout<<endl;
	
	s.max(&s.root);
	s.min(&s.root);

	
	int number;
	cout<<"Enter a number you want to search  in the tree"<<endl;
	cin>>number;
	s.search(&s.root,number);
	
}
