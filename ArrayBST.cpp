#include <iostream>
#include "ArrayBST.h"
using namespace std;

ArrayBST::ArrayBST(){
	for(int i=0;i<MAX_SIZE; i++){
	this->element[i]=0;	
	}
	
}

ArrayBST::~ArrayBST(){}

void ArrayBST::add(int data){
	if(this->element[0]==0){
		this->element[1]=data;
	}

else{
	for(int i=1; i<=MAX_SIZE; ){
		if(data < this->element[i]){
			i=2*i;
		}
		else
		{
			i=2*i+1;
		}
		if(this->element[i]==0){
			this->element[i]=data;
			break;
		
		}
		
	}
	
}

this->element[0]=this->element[0]+1;


}

void ArrayBST::print(){
	for(int i=0;i<MAX_SIZE;i++){
		cout<<element[i]<<endl;
	}
}



int main(){
	ArrayBST a;
	a.add(5);
	a.add(6);
	a.add(7);
	a.add(8);
	a.add(9);
	a.add(10);
	a.add(11);
	a.add(12);

	a.print();

	
	return 0;
}
