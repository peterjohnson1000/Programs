// Suppose your institution wishes to maintain a database of its employees. The database is
// divided into a number of classes whose (Assistant Professor, Associate Professor,
// Professor etc). Construct a Super Class Person to store personal information. Derive all
// the above classes from the Class. Develop a Java program to specify all the classes and
// define functions to create the database and retrieve individual information as and when
// required. Support at least 5 employees on each category.

import java.util.Scanner;
import java.util.*;

class person {

    String name,address,city;
    int phone,empid,sal;

    void personaldetails() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your name: ");
        name = input.nextLine();
        System.out.println("Enter your address: ");
        address = input.nextLine();
        System.out.println("Enter your city: ");
        city = input.nextLine();
        System.out.println("Enter your phone number: ");
        phone = input.nextInt();
        System.out.println("Enter your empid: ");
        empid = input.nextInt();
        System.out.println("Enter your sal: ");
        sal = input.nextInt();
    }
}

class assistantprofessor extends person {
    String sub;
    int exp;
    List<String> lists = new ArrayList<String>();
    List<Integer> listi = new ArrayList<Integer>();

    void assisdetails() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your Subject : ");
        sub = input.nextLine();
        System.out.println("Enter your Experience : ");
        exp = input.nextInt();
    }

    void disdetails() {
        System.out.println("\n");
        System.out.println("Designation : Assistant Professor");
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("City: " + city);
        System.out.println("Phone: " + phone);
        System.out.println("Empid: " + empid);
        System.out.println("Salary: " + sal);
        System.out.println("Subject : " + sub);
        System.out.println("Experience : " + exp);

        lists.add(name);
        lists.add(address);
        lists.add(city);
        listi.add(phone);
        listi.add(empid);
        listi.add(sal);
        lists.add(sub);
        listi.add(exp);

        System.out.println(lists);
        System.out.println(listi);
    }

    void display() {
        System.out.println(lists);
        System.out.println(listi);
    }
}

class associateprofessor extends person {
    String sub;
    int exp;
    List<String> lists = new ArrayList<String>();
    List<Integer> listi = new ArrayList<Integer>();

    void assisdetails() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your Subject : ");
        sub = input.nextLine();
        System.out.println("Enter your Experience : ");
        exp = input.nextInt();
    }

    void disdetails() {
        System.out.println("\n");
        System.out.println("Designation : Associate Professor");
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("City: " + city);
        System.out.println("Phone: " + phone);
        System.out.println("Empid: " + empid);
        System.out.println("Salary: " + sal);
        System.out.println("Subject : " + sub);
        System.out.println("Experience : " + exp);

        lists.add(name);
        lists.add(address);
        lists.add(city);
        listi.add(phone);
        listi.add(empid);
        listi.add(sal);
        lists.add(sub);
        listi.add(exp);

        System.out.println(lists);
        System.out.println(listi);

    }

    void display() {
        System.out.println(lists);
        System.out.println(listi);
    }
}

class professor extends person {
    String sub;
    int exp;
    List<String> lists = new ArrayList<String>();
    List<Integer> listi = new ArrayList<Integer>();

    void assisdetails() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your Subject : ");
        sub = input.nextLine();
        System.out.println("Enter your Experience : ");
        exp = input.nextInt();
    }

    void disdetails() {
        System.out.println("\n");
        System.out.println("Designation : Professor");
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("City: " + city);
        System.out.println("Phone: " + phone);
        System.out.println("Empid: " + empid);
        System.out.println("Salary: " + sal);
        System.out.println("Subject : " + sub);
        System.out.println("Experience : " + exp);

        lists.add(name);
        lists.add(address);
        lists.add(city);
        listi.add(phone);
        listi.add(empid);
        listi.add(sal);
        lists.add(sub);
        listi.add(exp);

        System.out.println(lists);
        System.out.println(listi);

    }

    void display() {
        System.out.println(lists);
        System.out.println(listi);
    }
}
class institiution {
    public static void main(String args[]) {

        int choice;
        assistantprofessor obj = new assistantprofessor();
        associateprofessor obj2 = new associateprofessor();
        professor obj3 = new professor();
        Scanner input = new Scanner(System.in);
        while(true)
        {
            System.out.println("\n");
            System.out.println("1. Assistant Professor");
            System.out.println("2. Associate Professor");
            System.out.println("3. Professor");
            System.out.println("4. Display");
            System.out.println("5. Exit");
            System.out.println("\n");

            int a = input.nextInt();
            choice = a;

            switch(choice) {
             case 1:
                obj.personaldetails();
                obj.assisdetails();
                obj.disdetails();
             break;
             case 2:
                obj2.personaldetails();
                obj2.assisdetails();
                obj2.disdetails();
             break;
             case 3:
                obj3.personaldetails();
                obj3.assisdetails();
                obj3.disdetails();
             break;
             case 4:
                int choice2;
                System.out.println("1. Assistant Professor");
                System.out.println("2. Associate Professor");
                System.out.println("3. Professor");

                int b = input.nextInt();
                choice2 = b;

                    if(choice2 == 1) {
                        obj.display();
                    }
                    if(choice2 == 2) {
                        obj2.display();
                    }
                    if(choice2 == 3) {
                        obj3.display();
                    }
                    break;
             case 5:
             System.exit(0);
             default:
             System.out.println("Error");
            }
        }
    }
}
