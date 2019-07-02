/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package string.reverse;
import java.awt.BorderLayout;
import java.util.*;
/**
 *
 * @author elite
 */
public class StringReverse {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the String :");
        String S1=sc.next();
        char H1[]=S1.toCharArray();
        char H2[]=new char[S1.length()];
        for(int i=0;i<S1.length();i++)
         {
             H2[i]= H1[S1.length()-i-1];
         }
        String S2=new String(H2);
        System.out.println(S2);
 
        if(S1.equals(S2))
            System.out.println("String are equal");
        else
            System.out.println("Strings are not equals");
    }
    
}
