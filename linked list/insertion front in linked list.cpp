#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	
};
void printList(node *n)
{
	int count=0;
	while(n!= NULL){
		cout<<n->data<<"->";
		n = n->next;
		count ++;	
	}
		cout<<"null"<<endl;
	cout<<"no. of elements in linked list is :"<<count;
	
}
node *push(node *head,int data){
	node *newnode = new  node();
	newnode->data = data;
	newnode->next = head;
	head = newnode;
	return head ;
	
}
void insertionAfter(node *pre,int data)
{
	node *newnode =new node();
	newnode->data = data;
	newnode->next = pre->next;
	pre ->next = newnode;
}
int main(){
	node *head = NULL;
	head = push(head,5);
	head = push(head,4);
	
	insertionAfter(head->next,42);
	
	printList(head);
}
