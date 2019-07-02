/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package div2;
import java.util.*;
/**
 *
 * @author elite
 */
public class Div2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two no. :");
        try{int a=sc.nextInt();
        int b=sc.nextInt();
        int c =a/b;
        System.out.println("Division is :"+c);
        }
        catch(ArithmeticException ex)
        {
            System.out.println("please enter non- zero divisor");
        }
        
    }
    
}
