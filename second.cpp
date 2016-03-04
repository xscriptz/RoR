#include <iostream>

struct Node
{
	int data;
	struct Node *next;
};
using namespace std;
int main()
{
	Node *p,*q,*j;
	p = new Node;
	p->data = 10;
	q = new Node;
	p->next=q;
	q->data = 20;
	j = new Node;
	q->next = j;
	j->data = 30;
	Node *k,*a;
	k = p;
	
	a = k;
	k = k->next;
	a->next = NULL;
	while(k->next != NULL)
	{
		cout <<k->data <<'\n';
		k = k->next;
		
	}


	return 0;

}