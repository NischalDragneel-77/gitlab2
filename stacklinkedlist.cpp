#include <iostream> 
using namespace std; 

class Node {
public: 
	int data; 
	Node* link; 
}; 
Node* top; 
void push(int data) 
{ 
	struct Node* temp; 
	temp = new Node(); 
	if (!temp) { 
		cout << "\nHeap Overflow"; 
		exit(1); 
	} 

	temp->data = data; 

	temp->link = top; 

	top = temp; 
} 

int isEmpty() 
{ 
	return top == NULL; 
} 

int peek() 
{ 	if (!isEmpty()) 
		return top->data; 
	else
		exit(1); 
} 

void pop() 
{ 
	struct Node* temp; 
	if (top == NULL) { 
		cout << "\nStack Underflow" << endl; 
		exit(1); 
	} 
	else { 
		temp = top; 

		top = top->link; 
		temp->link = NULL; 
		free(temp); 
	} 
} 
void display() 
{ 
	struct Node* temp; 
	if (top == NULL) { 
		cout << "\nStack Underflow"; 
		exit(1); 
	} 

	else { 
		temp = top; 
		while (temp != NULL) { 
			cout << temp->data << " \n";  
			temp = temp->link; 
		} 
	} 
} 
int main() 
{ 
	push(10); 
	push(32); 
	push(38); 
	push(94);  
	display(); 
	cout << "\nTop element is  " ;cout<< peek()<<endl;  
	pop(); 
	pop();  
	display();  
	cout << "\nTop element is  " ;cout<<peek(); 
	return 0; 
} 