public class Main
{  
    Node node;
    static class Node{
        int data;
        Node next;
        Node (int d){
            data=d;
            next=null;
        }
    }
    static Node insertFirst(Node head,int d){
        Node newnode=new Node(d);
        newnode.next=head;
        return newnode;
    }
    static void insertSearchAfter(Node head,int d,int key){
        Node newnode=new Node(d);
        Node temp=head;
        while(temp.data!=key){temp=temp.next;}
        if(temp.next!=null){newnode.next=temp.next;}
        temp.next=newnode;
        
    }
    
    static void insertLast(Node head,int d){
        Node newnode=new Node(d);
        Node temp=head;
        while(temp.next!=null){temp=temp.next;}
        temp.next=newnode;
        
    }
    static Node deleteFirst(Node head){
        return head.next;
    }
    static void deleteSearchAfter(Node head,int key){
        Node prev=null;
        Node temp=head;
        while(temp.data!=key && temp.next!=null){prev=temp;temp=temp.next;}
        if(temp.data==key){prev.next=temp.next;}
        
        
    }
    static void deleteLast(Node head){
        Node prev=null;
        Node temp=head;
        while(temp.next!=null){prev=temp;temp=temp.next;}
        prev.next=null;
        
    }
    static void print(Node node){
        while(node!=null){
            
            System.out.print(node.data+"->");
            node=node.next;
        }System.out.println("null");
    }
	public static void main(String[] args) {
		Node head=new Node(1);
		head=insertFirst(head,5);
		insertSearchAfter(head,15,5);
		insertLast(head,10);
		insertLast(head,20);
		insertLast(head,30);
		insertLast(head,40);
		print(head);
	        head=deleteFirst(head);
	        deleteLast(head);
		print(head);
		
	}
}