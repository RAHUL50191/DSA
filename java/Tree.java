public class Main
{

  static class Node
  {
    Node left;
    Node right;
    int data;
  }
  static void insert (Node node, int d)
  {
    if (node.data == 0)
      {
	node.data = d;
      }
    else if (node.data > d)
      {
          if(node.left==null)
	        node.left = new Node ();
	insert (node.left, d);
      }
    else if (node.data < d)
      {
           if(node.right==null)
	node.right = new Node ();
	insert (node.right, d);
      }
  }
static boolean search (Node node, int d)
  {
    boolean f = false;
    if (node != null)
      {
	//left
	f = search (node.left, d) || f;
	//center
	if (node.data == d)
	  {
	    f = true;
	  }
	//right
	f = search (node.right, d) || f;
      }
    return f;


  }
  }
  static void remove (Node node, int d)
  {
    if (node.data == d)
      {
        if(node.right!=null){
	    node.data = node.right.data;}
	    else if(node.right==null){node.data = 0;}
      }
    else if (node.data > d)
      {
	
	remove (node.left, d);
      }
    else if (node.data < d)
      {
	remove (node.right, d);
      }
  

}
  static void print (Node node)
  {
    if (node != null)
      {
	//left
	print (node.left);
	//center
	System.out.println ("node:" + node.data);
	//right
	print (node.right);
      }
  }

  public static void main (String[]args)
  {
    Node n = new Node ();
    insert (n, 5);
    insert (n, 52);
    insert (n,12);
    insert (n, 15);
    insert (n, 25);
    insert (n,24);
    
    print (n);
  }
}
