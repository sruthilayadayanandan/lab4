#include <iostream>
using namespace std;

class node
{
	//type
	public:

	int data;
	//pointer pointing to the next node
	node *next;

	//constructor
	node()
	{next=NULL;}
};

class stack
{
	node *top;
	
	//type
	public:

	constructor
	stack()
	{top=NULL;}

	

void push(int value){
		node *ptr=new node;
		ptr->data=value;
	
		if(top!=NULL)
		{ptr->next=top;}
	 
		top=ptr;
	}

bool isempty(){
		  if(top==NULL)
		return 1;
	
		return 0;
	}

void pop(){
		if(top!=NULL){
				node *ptr=top;
	 			top=top->next;
	 			delete ptr;
			}
		else
		{cout<<" No elements in the stack"<<endl;}
	}

void topdisplay(){
		cout<<top->data<<endl;
	}


int size(){
		int i=0;
		node *ptr=top;
		while(ptr!=NULL)
		{ptr=ptr->next;
		i+=1;}
	
		return i;
	}

void display(){
		node *ptr=top;
		while(ptr!=NULL)
		{cout<<ptr->data<<"->";
	 	ptr=ptr->next;}
		cout<<endl;
	}
};

int main(){


	stack s;
			 s.push(1);s.push(2);s.push(3);s.push(4);s.push(5);s.push(6);s.push(7);s.push(8);s.push(9);s.push(10);
	s.display();
		cout<<"Size of stack now is :"<<s.size()<<endl;
	s.pop();
	s.topdisplay();
	s.pop();
	s.topdisplay();
		cout<<"Checking if the stack is empty "<<s.isempty()<<endl;

}