
#include<iostream>
class Node{
public:
	int  info;
	Node *next;	
};
class list{
private:
	Node *Head;
	Node *Tail;
public:
	list();
	~list();
	bool isEmpty();
	void addTohead(int data);
	void addTotail(int data);
	void add(int data,Node* predecessor);
	void remove(int data);
	bool search(int data);
	Node* retrive(int data,Node *outptr);
	void traverse();
	void removefromHead();
};