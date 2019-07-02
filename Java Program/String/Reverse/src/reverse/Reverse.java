/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package reverse;

import com.sun.xml.internal.ws.commons.xmlutil.Converter;
import java.util.Scanner;

/**
 *
 * @author elite
 */
public class Reverse {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String :");
        String s =sc.next();
        StringBuffer S1 = new StringBuffer(s);
        S1=S1.reverse();
        String sr=S1.toString();
        System.out.println("Reverse ="+sr.toUpperCase());
    }
    
}
