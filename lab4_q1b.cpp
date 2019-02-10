#include <iostream>
using namespace std;

class node{

		public:

		int data;
		node *next;
		node()
		{next=NULL;}
};

class queue{
		node *front;
		node *end;

		public:

		queue()
		{front=NULL;end=NULL;}
		


void enqueue(int value){
		node *ptr=new node;
		ptr->data=value;
	
		if(this->isempty())
		{front=ptr;}
		else
		{end->next=ptr;}
		end=ptr;
	
}

bool isempty(){
		if(front==NULL)
		return 1;
	
		return 0;
}

void dequeue(){
		if(this->isempty()==0)
		{node *ptr=front;
	 	front=front->next;
	 	delete ptr;}
		else
		cout<<"Sorry No elements in the queue";
}

int size(){
		int i=0;
		node *ptr=front;
		while(ptr!=NULL)
		{ptr=ptr->next;i+=1;}
	
		return i;
}

void display(){
		node *ptr=front;
		while(ptr!=NULL)
		{cout<<ptr->data<<"->";
	 	ptr=ptr->next;}
		cout<<endl;
	}
};

int main()
{
		queue q;
		
	q.enqueue(1);q.enqueue(2);q.enqueue(3);q.enqueue(4);q.enqueue(5);q.enqueue(6);q.enqueue(7);q.enqueue(8);q.enqueue(9);q.enqueue(10);
	q.display();
	cout<<"Now Size of the queue is "<<q.size()<<endl;
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();
	cout<<"Now Size of the queue is "<<q.size()<<endl;
	return 0;
}
