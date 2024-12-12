#include<iostream>
using namespace std;
int queue[100],n=100;
int front= -1;
int rear =-1;

void inqueue(){
int val;
if(rear == n-1)
cout<<"Queue Overflow"<<endl;
else{
if(front== -1)
front = 0;
cout<<"Insert the element in queue : "<<endl;
cin>>val;
rear++;
queue[rear] = val;
}
}
void dequeue(){
if(front == -1 || front > rear){
cout<<"Queue underflow";
return;
}
else{
cout<<"Element deleted from queue is : "<< queue[front] <<endl;
front++;
}
}
void display(){
if (front == -1){
cout<<"Queue is empty"<<endl;
}
else{
cout<<"Queue elements are ";
for(int i=front;i<=rear;i++)
cout<<"queue[i]";
}
cout<<endl;
}

int main(){
int ch;
cout<<"1: Insert\n2: Delete\n3: Display\n4: Exit\nEnter Choice: \n";
cin>>ch;
switch(ch)
{
case 1: inqueue();
break;
case 2: dequeue();
break;
case 3: display();
break;
case 4: cout<<"Exit"<<endl;
break;
default: cout<<"Invalid Choice"<<endl;
}while(ch!=4);
return 0;
}