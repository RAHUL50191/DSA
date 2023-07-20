#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    
}*head;
void show(struct Node *head){
    
    while(head!=NULL){printf("%d->",head->data);head=head->next;}
    
}
struct Node* insertFirst(struct Node *head,int d){
    
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=d;
    newnode->next=head;
    return newnode;
 
}
void insertSearchAfter(struct Node *head,int d,int key){
    
    if(head==NULL){
        printf("node cant be null");
    }
    else{
        struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
        newnode->data=d;
        while(head->data!=key){head=head->next;}
        newnode->next=head->next;
        head->next=newnode;
        
        
    }
}


void insertLast(struct Node *head,int d){
    
    if(head==NULL){
        printf("node cant be null");
    }
    else{
        struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
        newnode->data=d;
        while(head->next!=NULL){head=head->next;}
        head->next=newnode;
        
    }
}
struct Node* deleteFirst(struct Node *head){
    
 
    head=head->next;
    return head;
 
}
void deleteSearchAfter(struct Node *head,int key){
    
    if(head==NULL){
        printf("node cant be null");
    }
    else{
        struct Node *prev=NULL;
    
        while(head->data!=key){prev=head;head=head->next;}
        prev->next=head->next;
        
    }
}
void deleteLast(struct Node *head){
    
    if(head==NULL){
        printf("node cant be null");
    }
    else{
        struct Node* prev=NULL;
        while(head->next!=NULL){prev=head;head=head->next;}
        prev->next=NULL;
        
    }
}
int main()

{   
    //struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    head=insertFirst(head,2);
    
    insertLast(head,12);
    insertLast(head,22);
    insertSearchAfter(head,7,12);
    deleteSearchAfter(head,12);
    head=insertFirst(head,2);
    insertLast(head,12);
    insertLast(head,22);
    deleteLast(head);
    head=deleteFirst(head);
    show(head);

    return 0;
}
