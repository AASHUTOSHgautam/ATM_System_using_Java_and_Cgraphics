package atm.java;
import java.util.*;
class choice{
   choice()
   {
       int Choice ;
       Scanner sc = new Scanner(System.in);
       System.out.println("1.For Deposit Amount : ");
       System.out.println("2.For Withdraw Amount : ");
       System.out.println("3.For Transfer Amount : ");
       System.out.println("4.For Check Amount / Entery : ");
       System.out.print("Enter your choice what do you want to execute : ");
       Choice=sc.nextInt();
       Menu obj = new Menu(Choice);
     
   }
}
class Menu{
   Menu(int num)
      {
           
              switch(num)
              {
                      case 1:
                      Deposit obj1=new Deposit();
                      choice ch1=new choice();

                      break;
                      case 2:
                      Withdraw obj2=new Withdraw();
                      choice ch2=new choice();

                      break;
                      case 3:
                      Transfer obj3=new Transfer();
                      choice ch3=new choice();

                      break;
                      case 4:
                      Check obj4=new Check();
                      choice ch4=new choice();
                      break;
                      default:
                      System.out.println("Please Enter valid choice !");
                      choice ch5=new choice();
              }
      }
  }

  class Deposit{
   Deposit(){
        System.out.print("Please Enter Amount do you want to deposit : ");
       Scanner sc =new Scanner(System.in);
       int damount=sc.nextInt();
       System.out.println("The Amount Deposite Successfully!");
    ATM.Tamount+=damount;
       ATM.Damount+=damount;

   }
}
class Withdraw{
   Withdraw(){
       System.out.print("Please Enter Amount do you want to Withdraw : ");
       Scanner sc =new Scanner(System.in);
       int wamount=sc.nextInt();
       if(wamount<ATM.Tamount){
      System.out.println("The Amount Withdraw Successfully!");
      ATM.Tamount-=wamount;
      ATM.Wamount+=wamount;
       }
       else{
           System.out.println("you have not sufficent Amount for Withrawal !");

       }
   }
}
class Transfer
{
    Transfer()
   {
       System.out.println("Please Enter Amount do you want to Trasfer : ");
       Scanner sc =new Scanner(System.in);
       int tramount=sc.nextInt();
       String hname;
       int Anum;
       String ifsc;
       System.out.print("Please Enter holer name : ");
       hname=sc.next();
   
     
       System.out.print("Please Enter Holder's Account IFSC Number : ");
       ifsc=sc.next();
       System.out.print("Please Enter Holder's Account Number : ");
       Anum=sc.nextInt();
 
 
       if(tramount<ATM.Tamount){
                ATM.Tamount-=tramount;
           ATM.TRamount+=tramount;
           System.out.println("The Amount Transfer Successfully!");
       
       }
       else{
           System.out.println("you have not sufficent Amount for Withrawal !");

       }
                   
   }
}
class Check{
     Check()
   {
      System.out.println("-------------------------------------------");
           System.out.println("Total Amount : " +ATM.Tamount);
           System.out.println("Deposit Amount : " +ATM.Damount);
           System.out.println("Withdraw Amount : " +ATM.Wamount);
           System.out.print("Transfer Amount : " +ATM.TRamount);
           System.out.println("Thanks for Using Me :)< !");

      System.out.println("-------------------------------------------");
       
   }
}

public class ATM {
public static  int Tamount=0;
public static  int Damount=0;
public static  int Wamount=0;
public static   int TRamount=0;
public static void main(String[] args) {
String  Id="Ashutosh";
int Pin=143;
          Scanner sc= new Scanner(System.in);
  System.out.print("Enter User Id : ");
      String id= sc.next();
      System.out.print("Entet your ATM pin : ");
      int pin = sc.nextInt();
      if(Id.equals(id) && Pin==pin)
      {
              System.out.print("valid id and password");
              choice ch=new choice();

      }
      else
      {
              System.out.println("Please Enter valid  user Id and ATM Pin");
               
      }

}

}