#include "StackL.h"

int Stack:: size(){
	return data.size();
}

void Stack:: push(int j){
	data.insert(j, data.size()+1);
}

void Stack:: pop(){
	data.remove(data.size());
}

int Stack:: top(){
	data.getAt(data.size());
}

void Stack:: clear(){
	data.clear();
}
