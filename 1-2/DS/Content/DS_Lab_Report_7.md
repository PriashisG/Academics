## Problem 1 : Queue implementation with array

### Algorithm : 

##### Push : 
step-1: If `front == -1` and `rear == -1`, set `front = 1` and `rear = 1`.
step-2: Else, increment `rear` by 1.
step-3: If `rear == N`, print "Insufficient size of queue!" and decrement `rear` by 1, then return.
step-4: Input a number and store it at `arr[rear]`.
step-5: Return.

Time Complexity : O(1)
##### Pop :
step-1: If queue is empty (`front == -1 && rear == -1` or `rear < front`), print "Queue is empty!" and return.
step-2: Increment `front` by 1.
step-3: Return.

Time Complexity : O(1)
##### Front : 
step-1: If queue is empty (`front == -1 && rear == -1` or `rear < front`), print "Queue is empty!" and return.
step-2: Print the value at `arr[front]`.
step-3: Return.

Time Complexity : O(1)
##### Display : 
step-1: If queue is empty (`front == -1 && rear == -1` or `rear < front`), print "Queue is empty!" and return.
step-2: Print all values from `arr[front]` to `arr[rear]`.
step-3: After loop, print newline and return.

Time Complexity : O(n)
### Code : 
```cpp
#include <bits/stdc++.h>
using namespace std;

const int N=1e2;
int arr[N];
int front=-1,rear=-1;
void push(){
    if((front==-1)&&(rear==-1)){front=1;rear=1;}
    else{
        rear++;if(rear==N){cout<<"Insufficient size of queue !"<<"\n";rear--;return;}
    }
    cout<<"Enter your number : "<<"\n";
    int y;cin>>y;
    arr[rear]=y;
    return;
}
void create(){
    cout<<"Enter the size of queue : "<<"\n";
    int n;cin>>n;
    for(int i=0;i<n;i++){
        push();
    }
}
void pop(){
    if((front==-1&&rear==-1)||rear<front){cout<<"Queue is empty !"<<"\n";return;}
    front++;
    return;
}
void Front(){
    if((front==-1&&rear==-1)||rear<front){cout<<"Queue is empty !"<<"\n";return;}
    cout<<arr[front]<<"\n";
}
void display(){
    if((front==-1&&rear==-1)||rear<front){cout<<"Queue is empty !"<<"\n";return;}
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    for(int i=0;;i++){
        int x;
        cout<<" <--- MENU ---> "<<"\n";
        cout<<"1. Create"<<"\n";
        cout<<"2. Push"<<"\n";
        cout<<"3. Pop"<<"\n";
        cout<<"4. Front"<<"\n";
        cout<<"5. Display"<<"\n";
        cout<<"6. Exit"<<"\n";
        cin>>x;
        if(x==1){create();}
        if(x==2){push();}
        if(x==3){pop();}
        if(x==4){Front();}
        if(x==5){display();}
        if(x==6){break;}
    }
    return 0;
}
```

### Output : 
![[Pasted image 20250816165746.png]]![[Pasted image 20250816165851.png]]

## Problem 2 : Queue implementation with Linked List

### Algorithm : 
### push : 
step-1: Create a new node using `malloc`.
step-2: Input a number and store it in `new_node->data`.
step-3: Set `new_node->next = NULL`.
step-4: If `head == NULL`, set both `head` and `tail` to the new node.
step-5: Else, set `tail->next = new_node` and update `tail = new_node`.
step-6: Return.

Time Complexity : O(1)
### create : 
step-1: Input the number `n`.
step-2: Repeat `n` times: call `push()`.
step-3: Return.

Time Complexity : O(n)
### pop : 
step-1: If `head == NULL`, print "Queue is empty!" and return.
step-2: Move `head` to the next node: `head = head->next`.
step-3: If `head == NULL`, also set `tail = NULL`.
step-4: Return.

Time Complexity : O(1)
### front : 
step-1: If `head == NULL`, print "Queue is empty!" and return.
step-2: Print `head->data`.
step-3: Return.

Time Complexity : O(1)
### display : 
step-1: If `head == NULL`, print "Queue is empty!" and return.
step-2: Initialize a temp pointer to `head`.
step-3: While `temp != NULL`, print `temp->data` and move to the next node.
step-4: After loop, print a newline.
step-5: Return.

Time Complexity : O(n)
### Code : 
```cpp
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*tail=NULL;
void push(){
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    cout<<"Enter your number : "<<"\n";
    int y;cin>>y;
    new_node->data=y;new_node->next=NULL;
    if(head==NULL){
        head=new_node;tail=new_node;
    }
    else{
        tail->next=new_node;tail=new_node;
    }
    return;
}
void create(){
    cout<<"Enter the size of queue : "<<"\n";
    int n;cin>>n;
    for(int i=0;i<n;i++){
        push();
    }
}
void pop(){
    if(head==NULL){cout<<"Queue is empty !"<<"\n";return;}
    head=head->next;if(head==NULL){tail=NULL;}
    return;
}
void front(){
    if(head==NULL){cout<<"Queue is empty !"<<"\n";return;}
    cout<<head->data<<"\n";
}
void display(){
    if(head==NULL){cout<<"Queue is empty !"<<"\n";return;}
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";temp=temp->next;
    }
    cout<<"\n";
}
int main(){
    for(int i=0;;i++){
        int x;
        cout<<" <--- MENU ---> "<<"\n";
        cout<<"1. Create"<<"\n";
        cout<<"2. Push"<<"\n";
        cout<<"3. Pop"<<"\n";
        cout<<"4. Front"<<"\n";
        cout<<"5. Display"<<"\n";
        cout<<"6. Exit"<<"\n";
        cin>>x;
        if(x==1){create();}
        if(x==2){push();}
        if(x==3){pop();}
        if(x==4){front();}
        if(x==5){display();}
        if(x==6){break;}
    }
    return 0;
}
```

### Output : 
![[Pasted image 20250816172338.png]]

![[Pasted image 20250816172405.png]]

## Problem 3 : Circular queue implementation with array

### Algorithm : 

### push : 
step-1: If `(rear+1)%M == front`, print "Queue is full!" and return.
step-2: Input a number and store in `x`.
step-3: If `front == -1 && rear == -1`, set `front = rear = 0`.
step-4: Else, set `rear = (rear + 1) % M`.
step-5: Store `x` in `arr[rear]`.
step-6: Return.
### pop : 
step-1: If `front == -1 && rear == -1`, print "Queue is empty!" and return.
step-2: If `front == rear`, set both `front = -1` and `rear = -1`.
step-3: Else, set `front = (front + 1) % M`.
step-4: Return.
### create : 
step-1: Input the size `M`.
step-2: Set `front = -1` and `rear = -1`.
step-3: Repeat `M` times: call `push()`.
step-4: Return.
### front : 
step-1: If `front == -1 && rear == -1`, print "Queue is empty!" and return.
step-2: Print `arr[front]`.
step-3: Return.
### display : 
step-1: If `front == -1 && rear == -1`, print "Queue is empty!" and return.
step-2: Initialize `i = front`.
step-3: Loop: print `arr[i]`.
step-4: If `i == rear`, break loop.
step-5: Else, update `i = (i + 1) % M`.
step-6: After loop, print newline and return.

### Code : 
```cpp
#include <bits/stdc++.h>
using namespace std;

const int N=1e2;
int arr[N];
int front=-1,rear=-1,M;

void push(){
    if((rear+1)%M==front){
        cout<<"Queue is full!"<<"\n";
        return;
    }
    int x;
    cout<<"Enter your number:"<<"\n";
    cin>>x;
    if(front==-1&&rear==-1){front=0;rear=0;}
    else{rear=(rear+1)%M;}
    arr[rear]=x;
}

void pop(){
    if(front==-1&&rear==-1){
        cout<<"Queue is empty!"<<"\n";
        return;
    }
    if(front==rear){
        front=-1;rear=-1;
    }
    else{
        front=(front+1)%M;
    }
}

void create(){
    cout<<"Enter the size of queue :"<<"\n";
    cin>>M;
    front=-1;rear=-1;
    for(int i=0;i<M;i++){
        push();
    }
}

void front_element(){
    if(front==-1&&rear==-1){
        cout<<"Queue is empty!"<<"\n";
        return;
    }
    cout<<arr[front]<<"\n";
}

void display(){
    if(front==-1&&rear==-1){
        cout<<"Queue is empty!"<<"\n";
        return;
    }
    int i=front;
    while(true){
        cout<<arr[i]<<" ";
        if(i==rear){break;}
        i=(i+1)%M;
    }
    cout<<"\n";
}

int main(){
    for(int i=1;;i++){
        int x;
        cout<<"<--- MENU --->"<<"\n";
        cout<<"1.Create"<<"\n";
        cout<<"2.Push"<<"\n";
        cout<<"3.Pop"<<"\n";
        cout<<"4.Front"<<"\n";
        cout<<"5.Display"<<"\n";
        cout<<"6.Exit"<<"\n";
        cin>>x;
        if(x==1)create();
        if(x==2)push();
        if(x==3)pop();
        if(x==4)front_element();
        if(x==5)display();
        if(x==6)break;
    }
    return 0;
}
```

### Output : 
![[Pasted image 20250816173649.png]]
![[Pasted image 20250816173712.png]]

![[Pasted image 20250816173805.png]]

