import java.util.Scanner;
import java.io.*;
public class x{

    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
     
    // 9 8 7 
    // 2 1 6
    // 3 4 5 
    
          for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                for(int j=0;j<n;j++){
                    System.out.print("#");
                }
            }
            else{
                for(int j=0;j<n;j++){

                    if(j==0 || j==n-1){
                        System.out.print("#");
                    }
                    else{
                        System.out.print(" ");
                    }
                }
            }
            System.out.println();
        }
        
    }
}