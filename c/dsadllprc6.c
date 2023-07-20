#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;  
void insertion_front();  
void insertion_last();  
void deletion_last();  
void deletion_specified();  
void display();  
  
void main ()  
{  
int choice =0;  
    while(choice != 9)  
    {  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from last\n4.Delete the node after the given data\n5.display\n9.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insertion_front();  
            break;  
            case 2:  
            insertion_last();  
            break;
            case 3:  
            deletion_last();  
            break;  
            case 4:  
            deletion_specified();  
            break;
            case 5:  
            display();  
            break;  
            case 6:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
void insertion_front()  
{  
   struct node *ptr;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter Item value");  
    scanf("%d",&item);  
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
   printf("\nNode inserted\n");  
}  
     
}  
void insertion_last()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
             
       }  
     printf("\nnode inserted\n");  
    }  
void deletion_last()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
        printf("\nnode deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
}  
void deletion_specified()  
{  
    struct node *ptr, *temp;  
    int val;  
    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d", &val);  
    ptr = head;  
    while(ptr -> data != val)  
    ptr = ptr -> next;  
    if(ptr -> next == NULL)  
    {  
        printf("\nCan't delete\n");  
    }  
    else if(ptr -> next -> next == NULL)  
    {  
        ptr ->next = NULL;  
    }  
    else  
    {   
        temp = ptr -> next;  
        ptr -> next = temp -> next;  
        temp -> next -> prev = ptr;  
        free(temp);  
        printf("\nnode deleted\n");  
    }     
}  
void display()  
{  
    struct node *ptr;  
    printf("\n printing values...\n");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d\n",ptr->data);  
        ptr=ptr->next;  
    }  
}   



OUTPUT


1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
1

Enter Item value1

Node inserted

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
1

Enter Item value2

Node inserted

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
1

Enter Item value3

Node inserted

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
1

Enter Item value4

Node inserted

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
5

 printing values...
4
3
2
1

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
2

Enter value0

node inserted

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
5

 printing values...
4
3
2
1
0

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
3

node deleted

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
5

 printing values...
4

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
4

 Enter the data after which the node is to be deleted : 4

Can't delete

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
5

 printing values...
4

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
1

Enter Item value1

Node inserted

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
5

 printing values...
1
4

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
1

Enter Item value2

Node inserted

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
5

 printing values...
2
1
4

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
9.Exit

Enter your choice?
4

 Enter the data after which the node is to be deleted : 1

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
5

 printing values...
2
1

1.Insert in begining
2.Insert at last
3.Delete from last
4.Delete the node after the given data
5.display
6.Exit

Enter your choice?
6