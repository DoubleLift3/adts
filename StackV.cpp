#include "StackV.h"

void Stack::size(){
	return data.size();
}

void Stack::push(int m){
data.push_back(m);
}

void Stack::pop(){
data.pop_back();
}

void Stack::top(){
return data [data.size()-1];
}

void Stack::clear(){
	while(int i=0; i<data.size(); i++){
	data.pop_back();
}
}
