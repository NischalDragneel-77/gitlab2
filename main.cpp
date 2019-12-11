#include<iostream>
#include "linkedlist.h"
int main(){
	list l;
	Node* t= new  Node;
	if(l.isEmpty()){
		std::cout<<"linkedlist is empty \n" ;
	}
	l.addTohead(2);
	l.addTohead(4);
	l.addTotail(6);
	l.addTohead(9);
	l.addTohead(8);
	std::cout<<"all elements of linked list \n";
	l.traverse();
	if(l.isEmpty()){
		std::cout<<"linkedlist is empty \n" ;
	}
	l.removefromHead();
	std::cout<<"after removing from head \n";
	l.traverse();
	l.remove(2);
	std::cout<<"after removing data\n";
	l.traverse();
	if(l.search(4)) std::cout<<"data exists in list \n";
	l.retrive(9,t);
	std::cout<<"the retrived data is \t";
	std::cout<<t->info;
	std::cout<<"\n";
	l.add(1,t);
	l.traverse();
}