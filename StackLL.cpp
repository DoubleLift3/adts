#include "StackLL.h"

class Stack::Node //self-referential Node class
{
	public:
	   int data;
	   Node* link;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	};


Stack:: ~Stack()
 {
	while(num_elements > 0)
	  pop();
  }	  
  
  int Stack:: size()
  {
	  return size();
  }
  
  void Stack::push(int k)
  {
	  Node* newPtr = new Node{k};
	  
	  newPtr->link = frontPtr;
	  frontPtr = newPtr;
	  
	  num_elements++;
	 
  }
  
  void Stack:: pop()
  {
	Node* delPtr;
	
	  delPtr = frontPtr;
	  frontPtr = frontPtr->link;
	 
	delete delPtr;
	num_elements--;
}

int Stack:: top()
{
	Node*printPtr;
	
	printPtr = frontPtr;
	return printPtr->data;
}

void Stack:: clear()
{
	clear();
}
  
