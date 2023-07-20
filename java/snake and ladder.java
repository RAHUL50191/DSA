import java.util.Random;
public class Main
{
    static int dice(){
        Random r=new Random();
        return r.nextInt(6)+1;
    
    }
	public static void main(String[] args) {
	    int count=0;int k=0;
	    int []players={0,0,0};
	    int []Shead={41,44,47,36};
	    int []Stail={3,14,32,17};
	    int []Lhead={4,8,12,20};
	    int []Ltail={25,34,31,42};
	    boolean []f={false,false,false};
	    while(count<=50){
	        
		    if(k==players.length){k=0;}
	        count=players[k];
	        
	        int x=dice();
		    System.out.println(x);
		    if(x==6 && f[k]==false){f[k]=true;x=dice();
		    System.out.println(x);count=x;}
		    else if(f[k]==true){
		         count=count+x;
		         for(int i=0;i<Shead.length;i++){
                    if(count==Shead[i]){System.out.println("snaked at "+count+" fall to "+Stail[i]);count=Stail[i];}
                 }
                 for(int i=0;i<Lhead.length;i++){
                    if(count==Lhead[i]){System.out.println("Ladder at "+count+" claim to "+Ltail[i]);count=Ltail[i];}
                 }
		        
		    }
		    System.out.println("position at player"+(k+1)+" :"+count);
		    
		    players[k]=count;
		    k++;
		    
		    
		    
	    }
	}
}