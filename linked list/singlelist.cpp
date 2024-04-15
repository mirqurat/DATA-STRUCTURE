#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		
};
class linkedList{
	 private:
	 	Node *head;
	public:
		linkedList(){
			head = NULL;
			
		}
  void	insertionfun(int item);
  void	display();
  void  reverse();
	 	
};

void linkedList::insertionfun( int item){
 	Node *newNode = new Node();
 	newNode->data=item;
 	newNode->next=NULL;
 	
 	if(head==NULL){
 		head=newNode;
 		cout<<"inserted value  :"<<item<<endl;
 		return ;
	 }
	 Node *temp=head;
	 while(temp->next != NULL){
	 	temp=temp->next;
	 }
	 
	 temp->next= newNode;
	 cout<<"inserted value is "<<item<<endl;
 	
}
void linkedList::display(){
	Node *temp1=head;
	while(temp1->next !=NULL)
	{
		cout<<temp1->data<<"->";
		temp1=temp1->next;
	}
	cout<<"null"<<endl;
}
void linkedList::reverse(){
	cout<<"reverse of list"<<endl;
	
}
int main()
{
	linkedList list;
	list.insertionfun(2);
	list.insertionfun(3);
	list.insertionfun(4);
	list.insertionfun(9);
	list.insertionfun(6);
	list.insertionfun(8);
	list.insertionfun(6);
	list.insertionfun(3);
	list.display();
	list.reverse();
	return 0;
}
