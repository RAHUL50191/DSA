public class Main {
    public static void main(String[]args){
     b obj=new b();
     obj.rahul();
    }
}

public class a
{
    // public -> protected ->default->private
    int x=10;

}
public class b extends a{
    public void rahul(){
    a obja=new a();
    System.out.println(super.x+" "+obja.x);

}
}