//Binary search tree impementation
// Array implementation by Sabin and LinkedList implementation by Samips
/*
Create a project on github and add your team member as a collaborator.
*/

#ifndef BST_h
#define BST_h

class BST{
	public:
		virtual void add(int data)=0;
		//virtual void preOrderTraversal(int index)=0;
		virtual bool search(int data)=0;
};

#endif
