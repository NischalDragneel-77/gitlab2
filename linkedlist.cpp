#include"linkedlist.h"
list::list(){
	Head=NULL;
	Tail=NULL;
}
list::~list(){}
bool list::isEmpty(){
	return Head==NULL;
}
void list::addTohead(int data){
	Node* newNode=new Node();
	newNode->info=data;
	newNode->next=Head;
	Head=newNode;
	if (Tail==NULL)  Tail=Head;
}
void list::addTotail(int data){
	Node* newNode=new  Node();
	newNode->info=data;
	newNode->next=NULL;
	Tail->next=newNode;
	Tail=newNode;	
}
void list::add(int data,Node* predecessor){
	Node* newNode=new  Node();
	newNode->info=data;
	newNode->next=predecessor->next;
	predecessor->next=newNode;
}
void list::removefromHead(){
	Node *ntd;
	ntd=Head;
	Head=ntd->next;
	if (Head==NULL) Tail==NULL;
}
void list::remove(int data){
	if (isEmpty()) std::cout<<"list is  empty";
	if (Head->info==data)	removefromHead();
	else{ 
		Node* temp=Head->next;
		Node*  prev=Head;
		while(temp!=NULL){
			if (temp->info==data) prev->next=temp->next;
			if (temp->next==NULL) Tail=prev;
			prev=prev->next;
			temp=temp->next;		
		}
	}
}

bool list::search(int data){
	if (isEmpty()) std::cout<<"list is  empty";
	Node* temp= new Node;
	temp=Head;
	while(temp!=NULL){
		if (temp->info==data) return true;
		temp=temp->next;
	}
	return false;
}

Node* list::retrive(int data,Node* outptr){
	if (isEmpty()) std::cout<<"list is  empty";
	Node* temp= new Node;
	temp=Head;
	while(temp!=NULL && temp->info!=data){
		temp=temp->next;
	}
	if (temp==NULL){
		return  NULL; 
	}
	else{
		*outptr=*temp;
		return temp;	
	}			
}
void list::traverse(){
	Node* temp=Head;
	while(temp!=NULL){
		std::cout<<temp->info;
		std::cout<<"\n";
		temp=temp->next;
	}
}
