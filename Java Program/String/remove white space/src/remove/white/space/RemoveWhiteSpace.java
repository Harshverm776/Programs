/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package remove.white.space;

import java.util.Scanner;

/**
 *
 * @author Harsh
 */
public class RemoveWhiteSpace {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
                Scanner sc =new Scanner(System.in);
		System.out.println("Enter A line :");
		String s=sc.nextLine();
		char c[]=s.toCharArray();
		int count=0;
		for(int i=0;i<s.length();i++)
			if(c[i]==' ')
                        {
                            s=s.replace(' ', '');
                        }
				count++;
		System.out.println("THE no of Space are :"+count);
	
    }
    
}
