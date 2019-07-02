import java.util.*;
class SimpleInterest
{
 int principle;
 int rate;
 int time;
 void takeInput()
{
  Scanner sc = new Scanner(System.in);
System.out.println("Enter principle :");
principle=sc.nextInt();
System.out.println("Enter rate :");
rate=sc.nextInt();
System.out.println("Enter time :");
time=sc.nextInt();
}
void findSI()
{
int SI = (principle *rate *time)/100;
System.out.println("Simple Interest is "+SI);
}
}
class Test{

 public static void main(String[] args)
 {
 SimpleInterest s=new SimpleInterest();  
 s.takeInput();
 s.findSI();
}

}