/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stringlength;

import java.util.Scanner;

/**
 *
 * @author elite
 */
public class StringLength {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
         System.out.println("Enter String :");
        String S1 =sc.next();
        System.out.println("Length of your String is:"+S1.length());
    }
    
}
