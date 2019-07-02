/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package noofvowels;

import java.util.Scanner;

/**
 *
 * @author elite
 */
public class NoOfVowels {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
         System.out.println("Enter String :");
        String S1 =sc.next();
        int count =0;
        for(int i=0;i<S1.length();i++)
        {
            if(S1.charAt(i)=='a'||S1.charAt(i)=='e'||S1.charAt(i)=='i'||S1.charAt(i)=='o'||S1.charAt(i)=='u')
                count++;
        }
        System.out.println("No. of vowels are :"+count);
    }
    
}
