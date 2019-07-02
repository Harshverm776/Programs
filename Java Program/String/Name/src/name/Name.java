/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package name;

import java.util.Scanner;

/**
 *
 * @author elite
 */
public class Name {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first name:");
        String fn =sc.next();
        System.out.println("Enter last name:");
        String ln =sc.next();
        System.out.println("your String :"+fn+" "+ln);
    }
    
}
