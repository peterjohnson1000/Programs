// Develop a program in Java to display the details of bank account using Class.

import java.util.Scanner;
class bankinfo {
    int accountbal = 0;

    void deposite() {
       System.out.println("Enter the amount to be Deposited: ");
       Scanner input = new Scanner(System.in);
       int depoamt = input.nextInt();
       accountbal += depoamt;
       System.out.println("You have sucessfully deposited:" + depoamt);
       System.out.println("Current Account Balance is: " + accountbal);
    }
    void withdraw() {
       System.out.println("Enter the amount to be Withdrawn: ");
       Scanner input = new Scanner(System.in);
       int withamt = input.nextInt();
       if(withamt<accountbal) {

           accountbal -= withamt;
           System.out.println("You have sucessfully withdrawn:" + withamt);
           System.out.println("Current Account Balance is: " + accountbal);
       }
       else {
           System.out.println("Insufficent Balance");
       }
    }
    void accbal() {
        System.out.println("Your Account balance is: " + accountbal);
    }
}

class bank {
    public static void main(String args[]) {

        int choice;

        bankinfo object = new bankinfo();
        Scanner input = new Scanner(System.in);
        while(true) {
        System.out.println(" ");
        System.out.println("1. Deposite Cash: ");
        System.out.println("2. Withdraw Cash: ");
        System.out.println("3. View Account Balance: ");
        System.out.println("4. Exit ");

        int a = input.nextInt();
        choice = a;
        
            switch(choice) {
             case 1:
             object.deposite();
             break;
             case 2:
             object.withdraw();
             break;
             case 3:
             object.accbal();
             break;
             case 4:
             System.exit(0);
             default:
             System.out.println("Error");
            }

        }
    }
}
