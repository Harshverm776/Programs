/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nullpointer;
import java.time.Clock;
import java.util.*;
/**
 *
 * @author elite
 */
class A
{
    int x;
}
public class Nullpointer {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        try{
            System.out.println("Choose :\n 1.) nullify the object\n2.) creat object.");
            int choice=sc.nextInt();
            
            if(choice==1)
            {
                A obj=null;
            }
            else if(choice==2)
            {   A obj=new A();
            
            System.out.println("Enter the value of x.");
            obj.x=sc.nextInt();
        }
        }
        catch(NullPointerException ex)
        {
            System.out.println("object is null");
        }
        
    }
    
}
