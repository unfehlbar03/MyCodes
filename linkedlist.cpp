#include <iostream>
#include <math.h>

using namespace std;

struct Node{
    int data;
    Node * link; 
};

Node * root;

void append(){
    Node * temp = new Node();
    temp->link=NULL;
    cout<<"Enter element to append to list ";
    int value;
    cin>>value;
    temp->data=value;
    if(root==NULL){
        root=temp;
    }
    else{
        Node * temp1 = root;
        while(temp1->link!=NULL){
            temp1= temp1->link;
        } 
        temp1->link= temp;
       
    }
    cout<<"Element "<<value<<" has been added to the list.";
}
int length(){
    Node * temp=root;
    int count=1;
    while(temp->link!=NULL){
            count++;
            temp= temp->link;
        }
    return count; 
}
void addatNth(){
    Node * temp= new Node();
    int ele,pos;
    cout<<"Enter the element you want to add and the index at which you want to add.\n";
    cin>>ele;
    cin>>pos;
    temp->data=ele;
    if(pos==1){
        temp->link=root;
        root=temp;
    }
    
    else if(length()>=pos-1){
        Node * temp1=new Node(); 
        temp1=root;     
        for(int i=1;i<pos-1;i++){
            temp1=temp1->link;
        }
        temp->link=temp1->link;
        temp1->link=temp;
    }
    else{
        cout<<"This index doesnt exist.\n";
    }
    cout<<"Elements was appended at requested position.";
}

void addatbeginning(){
    Node * temp =new Node();
    cout<<"Enter element you want to append at beginning";
    cin>>temp->data;
    temp->link=root;
    root=temp;
    
}

void pop(){
    Node * temp = new Node();
    temp=root;
    int n = length();
    for(int i=0; i<n-2; i++){
        temp= temp->link;
    }
    temp->link=NULL;
    delete temp->link;
}

void deleteNth(){
    Node * temp = new Node();
    temp=root;
    int n;
    cout<<"Enter the index of node you want to delete";
    cin>>n;
    if(n==1){
        root=temp->link;
        delete temp;
    }
    else{
        for(int i=0; i<n-2;i++){
            temp=temp->link;
        }
        Node *temp1=new Node();
        temp1=temp->link;
        temp->link=temp1->link;
        delete temp1;
    }
}

void deleteElement(){

}


void len(){
    Node * temp = root;
    int count=1;
    if(temp==NULL){
        cout<<"0\n";
    }
    else{
        while(temp->link!=NULL){
            count++;
            temp= temp->link;
        } 
        cout<<count<<endl;
    }
}

Node* reverse(Node* root){
    Node *current,*prev,*next =new Node();
    current=root;
    prev=NULL;
    while(current!=NULL){
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    root=prev;
    return root;
}

void display(){
    Node * temp1 = root;
    if(temp1==NULL){
        cout<<"The list is empty";
    }
    else{
        while(temp1!=NULL){
            
            cout<<temp1->data<<"-->";
            temp1= temp1->link;
        }
        cout<<"\n";
    } 
}


int main(){
    root=NULL;
    cout<<"Hello! You have entered into a linked list.\n";
    cout<<"Here you can add element/(append), delete specific element, delete element by its position, pop element from last, insert an element at a specific index, reverse the list and printing the elements of list";
    while(true){
    cout<<"\nInput the index of the option you want to perform\n";
    cout<<"1. Append\n2. Insert at nth\n3. Insert at beggining\n4. Pop\n5. Delete nth element\n6. Delete specific element\n7. Length of list\n8. Reverse the list\n9. Print list\n10. Exit\n";
    int ch;
    scanf("%d",&ch);
        switch(ch){
            case 1:
                append();
                break;
            case 2:
                addatNth();
                break;
            case 3:
                addatbeginning();
                break;
            case 4:
                pop();
                break;
            case 5:
                deleteNth();
                break;
            case 6:
                deleteElement();
                break;
            case 7:
                len();
                break;
            case 8:
                reverse( root);
                break;
            case 9:
                display();
                break;
            case 10:
                exit(1);
                break;
        }
    }
    
    return 0;
}
