#include <iostream>
#include "BST.h"

class node
{
public:
    int data;
    node* left ;
    node* right;
    node();
    node(int);
    ~node();
};


class LinkedBST:public BST{
    
    public:
    node root;
    LinkedBST();
    ~LinkedBST();
    void preorderTraversal(node *root);
    void preOrderTraversal(int index);
    void add(int data);
    void add(node *root,int data);
    bool search(int data);
    bool search(node *root,int targetKey);
    int max();
    int max(node* root);
    int min();
    void min(node* root);
    void inOrderTraversal(int index);
    void inorderTraversal(node *root);
    void deleteKey(int key);
    void deleteKey(node *root,int key);
};
