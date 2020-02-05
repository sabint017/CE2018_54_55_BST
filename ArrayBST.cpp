#include <iostream>
#include "ArrayBST.h"
using namespace std;

ArrayBST::ArrayBST(){
	for(int i=0;i<MAX_SIZE; i++){
	this->element[i]=0;	
	}
	
}
// inserting data into the tree
void ArrayBST::add(int data){
	int currentIndex=0;
	cout<<"Adding "<<data<<endl;
	
	while(true){
		if(element[currentIndex]== NULL){
			element[currentIndex]=data;
			cout<<"Inserted "<<data<<" at Index "<<currentIndex<<endl;
			break;
		}
		
		else if(data>element[currentIndex]){
			if(data==element[currentIndex]){
				cout<<"ERROR! Data already present!"<<endl;
				break;
			}
			else{
				cout<<"Inserting right: "<<endl;
				currentIndex=(2*currentIndex)+2;
			}
		}
		else if(data<element[currentIndex]){
			if(data==element[currentIndex]){
					cout<<"ERROR! Data already present!"<<endl;
				break;
			}
			else{
				cout<<"Inserting left: "<<endl;
				currentIndex=(2*currentIndex)+1;
			}
			
		}
	}
}


//searching data
bool ArrayBST::search(int key){
	int currentIndex=0;
	cout<<"Searching "<<key<<endl;
	
	while(true){
		if(element[currentIndex]==NULL){
			cout<<"Key Not Found!"<<endl;
			break;
		}
		else if(key==element[currentIndex]){
			cout<<"Key  Found! at Index "<< currentIndex << endl;
			break;
		}
		
		else if(key>element[currentIndex]){
			currentIndex=(2*currentIndex)+2;
				
		}
		else if(key < element[currentIndex]){
			currentIndex=(2*currentIndex)+1;
			
		}
	}
}

//getting left child
	int ArrayBST:: getLeftChild(int currentIndex){
		if((element[currentIndex]!=NULL) && ((2*currentIndex+1) <= MAX_SIZE)){
			return 2*currentIndex+1;
		
		}
		else{
			return -1;
		}
	}

//getting right child
	
	int ArrayBST:: getRightChild(int currentIndex){
		if((element[currentIndex]!=NULL) && ((2*currentIndex+2) <= MAX_SIZE)){
			return (2*currentIndex+2);
		
		}
		else {
			return -1;
		}
	
	}
	



void ArrayBST::preOrderTraversal(int currentIndex) {
    if((currentIndex >= 0) && (element[currentIndex] != NULL)){
    	
       	cout << element[currentIndex]<<endl;
		preOrderTraversal(getLeftChild(currentIndex));
        preOrderTraversal(getRightChild(currentIndex));
        
        
    }
}


int ArrayBST::min(){
	int currentIndex=0;
	while(element[getLeftChild(currentIndex)]!=NULL){
	//	currentIndex = getLeftChild(currentIndex);
		currentIndex = 2*currentIndex+1;
		

	}
		return (element[currentIndex]);	
}


int ArrayBST::max(){
	int currentIndex=0;
	while(element[getRightChild(currentIndex)]!=NULL){
		currentIndex = 2*currentIndex+2;
		

	}
		return (element[currentIndex]);	
}


//void ArrayBST::delete(int key){
//	int currentIndex=0;
//	
//	for(currentIndex=0;currentIndex<MAX_SIZE-1;currentIndex++){
//		
//		if(element[currentIndex]==key){
//			delete element[currentIndex];
//		}
//	}
//}

void ArrayBST::inOrderTraversal(int currentIndex) {
    if((currentIndex >= 0) && (element[currentIndex] != NULL)){
    	
      
		inOrderTraversal(getLeftChild(currentIndex));
		cout << element[currentIndex]<<endl;
        inOrderTraversal(getRightChild(currentIndex));
        
        
    }
}





 ArrayBST::~ArrayBST(){}
 
int main(){
	ArrayBST a;
	a.add(5);
	a.add(1);
	a.add(3);
	a.add(7);
	a.add(10);
	a.add(6);
	a.add(13);
	a.add(71);
	a.add(16);



	a.search(7);
	cout<<"Pre order Traversal:"<<endl;
	a.preOrderTraversal(0);
	
		cout<<"In order Traversal:"<<endl;
	a.inOrderTraversal(0);
	cout<<endl<<"Minm element is:" << a.min();
	cout<<endl<<"Maxm element is:" << a.max();
	
	return 0;
}
