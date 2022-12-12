// Develop a Java program to read and print student’s data using inheritance Class person:
// name, age, gender Class student inherits from person: mark1, mark2, mark3, total marks,
// grade.

import java.util.Scanner;

class person {
     String name;
     int age;
     String gender;

    void details(String name, int age, String gender) {
        this.name = name;
        this.age = age;
        this.gender = gender;
    }
}

class students extends person {
    double m1,m2,m3,totalmarks;
    String grade;

    void marks(double m1, double m2, double m3) {
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
        totalmarks = m1 + m2 + m3;
    }

    void report() {
        System.out.println("\n");
        System.out.println("-- Student Info --");
        System.out.println("Student Name: " + name);
        System.out.println("Student Age: " + age);
        System.out.println("Gender: " + gender);
        System.out.println("\n");
        System.out.println("-- Subject Marks --");
        System.out.println("Subject 1 - Mark = " + m1);
        System.out.println("Subject 2 - Mark = " + m2);
        System.out.println("Subject 3 - Mark = " + m3);
        System.out.println("Total Marks = " + totalmarks);

        if(totalmarks > 25)
        {
            grade = "A";
        }
        else if(totalmarks > 20)
        {
            grade = "B";
        }
         else if(totalmarks > 15)
        {
            grade = "B";
        }
        else 
        {
            grade = "c";
        }
        System.out.println("Grade: " + grade);
    }
}

class student {
    public static void main(String args[]) {
        students dobj = new students();
        //Scanner input = new Scanner(System.in);
        //int a = input.nextInt();
        dobj.details("Peter Johnson",20,"Male");
        dobj.marks(10,9,8);
        dobj.report();
        
    }
}
