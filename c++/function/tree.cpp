#include <iostream>

using namespace std;
struct Node{
    int data;
    struct Node* left=NULL;
    struct Node* right=NULL;
};
void inoder(Node* root){
    if(root==NULL);
    else{
        inoder(root->left);
        cout<<root->data<<"<<";
        inoder(root->right);
    }
    
}void preoder(Node* root){
    if(root==NULL);
    else{
        cout<<root->data<<"<<";
        preoder(root->left);
        preoder(root->right);
    }
    
}
void postoder(Node* root){
    if(root==NULL);
    else{
        postoder(root->left);
        postoder(root->right);
        cout<<root->data<<"<<";
    }
    
}
bool search(Node* root,int d){
    if(root==NULL)return false;
    return search(root->left,d)||search(root->right,d)||(root->data==d);
}
void insert(Node* root,int d){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node*));
    node->data=d;
    if(root->left==NULL){root->left=node;return;}
    if(root->right==NULL){root->right=node;return;}
    if(root->left->left==NULL ||root->left->right==NULL)
    {insert(root->left,d);return;}
    if(root->right->left==NULL ||root->right->right==NULL)
    {insert(root->right,d);return;}
}
void insertAtSearch(Node* root,int key,int d){
    if(search){
        
    if(root==NULL){return ;}
    if(root->data==key){
        insert(root,d);
        return;
        
    }
    insertAtSearch(root->left,key,d);
    insertAtSearch(root->right,key,d);
        
    }
}
int main()
{
   
     struct Node *head=(struct Node*)malloc(sizeof(struct Node*));
    struct Node *first=(struct Node*)malloc(sizeof(struct Node*));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node*));
    head->data=9;
    head->left=first;
    head->right=second;
    first->data=10;
    second->data=19;
    insert(head,6);
    insert(head,16);
    insert(head,26);insert(head,36);
    postoder(head);
    cout<<"\n";
    preoder(head);
    cout<<"\n";
    cout<<"search found: "<<search(head,96);
    cout<<"\n";
    cout<<"search found: "<<search(head,6);
    cout<<"\n";
    insertAtSearch(head,16,17);
    inoder(head);
    return 0;
}