#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 5

// STACK
class stac {
	int top;
	int arr[MAX];
public:
	stac() {
		top = -1;
	}
	void push(int n);
	void pop();
	void disp();
};
void stac::push(int n) {
	if (top == MAX - 1) {
		cout << "\n stack full";
	}
	else {
		arr[++top] = n;
	}
}
void stac::pop() {
	if (top == -1) {
		cout << "\n underflow";
	}
	else {
		cout << "\n item popped" << arr[top];
		top--;
	}
}
void stac::disp() {
	for (int i = top; i>=0; i--) {
		cout << "\n\t" << arr[i];
	}
}


//QUEUE
class queue {
	int front;
	int rear;
	int arr[MAX];
public:
	queue() {
		front = -1;
		rear = -1;
	}
	void push(int n);
	void pop();
	void disp();
};
void queue::push(int n) {
	if (rear == MAX - 1) {
		cout << "\n overflow";
	}
	else {
		arr[++rear] = n;
	}
	if (front == -1) {
		front = 0;
	}
}
void queue::pop()
{
	if (front == -1) {
		cout << "\n underflow";
	}
	else {
		cout << "\n itempopped" << arr[front];
		front++;
		if (front == rear) {
			front = rear = -1;
		}
	}
}
void queue::disp() {
	for (int i = front; i <= rear; i++) {
		cout << "\n\t" << arr[i];
	}
}


// CIRCULAR QUEUE
class queuec {
	int front;
	int rear;
	int arr[MAX];
public:
	queuec() {
		front = -1;
		rear = -1;
	}
	void push(int n);
	void pop();
	void disp();
};
void queuec::push(int n) {
	if (  ((rear == MAX - 1) && front == 0)||rear+1==front) {
		cout << "\n overflow";
	}
	if (rear == MAX - 1) {
		rear = 0;
	}
	else
		rear = rear + 1;
	arr[rear] =n;
	if (front == -1) {
		front = 0;
	}

	
}
void queuec::pop() {
	int n ;
	if (front == -1) {
		cout << "\n underflow";
	}
	else {
		n = arr[front];
		if (front == rear) {
			front = rear = -1;
		}
		else {
			if (front == MAX - 1) {
				front = 0;
			}
			else {
				front = front + 1;
			}
		}
	}
}
void queuec::disp() {
	for (int i = front; i <= rear; i++) {
		cout << "\n\t" << arr[i];
	}
}


//  LINKLIST


class link {
	struct node {
		int data;
		node *link;
	}*p;
public:
	link() {
		p = NULL;
	}
	void addl(int n);
	void addin(int c,int n);
	void addb(int n);
	void del(int n);
	void disp(); 
	~link() {
		node *q;
		if (p== NULL)
			return;
		while(p!=NULL) {
			q= p->link;
			delete p;
			p = q;
		}
	}
};
void link::del(int n) {
	node *q,*t;
	q=p;
	if(q->data==n)p=q->link;
	while(q->link!=NULL)
	{
		if(q->link->data==n){q->link=q->link->link;break;}
		q=q->link;
	}
}
void link::addb(int n) {
	node *t, *q;
	q = p;
	t = new node;
	t->data = n;
	t->link = p->link;
	p = t;

}
void link::addin(int c, int n) {
	node *q, *t;
	q = p;
	for (int i = 0; i < c; i++)
		q = q->link;
	t = new node;
	t->data = n;
	t->link = q->link;
	q->link = t;
}
void link::addl(int n) {
	node *t,*q;
	 p;
	if (p== NULL) {
		p = new node;
		p->data = n;
		p->link = NULL;
	}
	else {
		q = p;
		while (q->link != NULL) 
			q= q->link;
		t = new node;
		t->data = n;
		t->link = NULL;
		q->link = t;
		
	}
}
void link :: disp() {
	node *t;
	t = p;
	while (t != NULL) {
		cout << "\n\t" << t->data;
		t = t->link;
	}
}
int main() {
	// STACK  && QUEUE &&circular QUEUE
	//stac s;
	/*queuec s;
	s.push(1);
	s.push(5); 
	s.push(7); 
	s.push(5);
	s.pop();
	s.disp();*/
	link l;
	l.addl(1);
	l.addl(20);
	l.addl(15);
	l.addl(10);
	l.addl(21);
	//l.addb(65);
	l.del(1);
	//l.addin(2, 7);
	l.disp();
	//_getch();
	return 0;
}
