
#include "BST.h"


#define MAX_SIZE 10

class ArrayBST : public BST {
	private:
		int element[MAX_SIZE];
	public:
		ArrayBST();
		~ArrayBST();
		
	void add(int data);
	void print();
//	void preOrderTraversal();
//	void preOrderTraversal(int data);
//	bool search(int data);
		
};
