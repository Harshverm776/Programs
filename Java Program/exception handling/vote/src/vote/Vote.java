/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vote;
import java.util.*;
public class Vote {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc =new Scanner(System.in);
        System.out.println("enter ur age :");
        int votecount=0;
        int age=sc.nextInt();
        if(age>=18)
            votecount++;
            
        
    }
    
}
