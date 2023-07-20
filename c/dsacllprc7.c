#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
typedef struct node node;
struct node *head;
void beginsert();
void begin_delete();
void anyhead();
void anydelete();
void display();
int main()
{
    int ch=0;
 
    while(ch!=6){
        printf("\n1.insert at last node\n2.insert at any node\n3.deleting at first node\n4.deleting at any node\n5.display\n6.exit\nselect option :");
        scanf("%d",&ch);
        switch(ch)
        {   case 1:
            beginsert();
            break;
            case 3:
            begin_delete();
            break;
            case 2:
            anyhead();
            break;
            case 4:
            anydelete();
            break;
            case 5:
            display();
            break;
            case 6:
            exit(0);
            break;
        }
    }
    return 0;
}

void beginsert()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else   
    {  
        printf("\nEnter the node data?");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nnode inserted\n");  
    }  
              
}  
void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted\n");  
  
    }  
}  
void anyhead(){
    node *new,*temp,*term;
    int val;
    new=(node*)malloc(sizeof(node));
    scanf("%d",&new->data);
    printf("enter after which node willbe insert");
    scanf("%d",&val);
    
   if(head->data==0){
        head->data=new->data;
    }
    else{
        temp=head;
        while(temp->data!=val)
         {
             if(temp->next!=NULL)
             {temp=temp->next;}
             else{
                 printf("item not found");
                 return;
             }
         }term=temp->next;
         temp->next=new;
         new->next=term;
     
       
    }
}
void anydelete(){int val;node *temp,*term;
    temp=head;   
    if(head->data==NULL){
        printf("\nit is empty\n\n");
    }
    else{
        printf("enter number to delete:");
        scanf("%d",&val);
        while(temp->data!=val){
            term=temp;  
            if(temp->next!=NULL){
                temp=temp->next;
            }
            else{
                printf("item not found\n\n");
                return ;
            }
          
        }term->next=temp->next;
    }
}
void display(){  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("\n printing values ... \n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  




OUTPUT

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :1] 

Enter the node data?1

node inserted

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :1

Enter the node data?2

node inserted

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :1

Enter the node data?3

node inserted

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :5' 

 printing values ... 
3
2
1

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :2
5
enter after which node willbe insert3

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :5

 printing values ... 
3
5
2
1

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :3

node deleted

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :5

 printing values ... 
5
2
1

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :4
enter number to delete:2

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :5

 printing values ... 
5
1

1.insert at last node
2.insert at any node
3.deleting at first node
4.deleting at any node
5.display
6.exit
select option :


