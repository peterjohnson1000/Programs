import java.util.Scanner;
class stackinfo {
    int top = -1;
    int[] stackarray = new int[10];  

    void push() {       // Used to push an element to stack
    System.out.println("Enter the value to be Pushed: ");
    Scanner input = new Scanner(System.in);
    int s = input.nextInt();
    System.out.println("The value pushed is: " + s);
    top += 1;
    stackarray[top] = s;
    }

    void pop() {    // Used to remove the top element from the stack
    System.out.println("The value poped is: " + stackarray[top]);
    top -= 1;
    }

    void display() { // Used to display the elements of the stack
    System.out.println(" ");
    System.out.println("Elements in the Stack are -");
    for(int i=top; i>=0; i--) {
        System.out.println("-> " + stackarray[i]);
    }
    }
}

class stack {
    public static void main(String args[]) {
        int choice;

        stackinfo object = new stackinfo();
        Scanner input = new Scanner(System.in);

        while(true) {
        System.out.println(" ");
        System.out.println("1. Push ");
        System.out.println("2. Pop ");
        System.out.println("3. Display ");
        System.out.println("4. Exit ");

        int s = input.nextInt();
        choice = s;

         switch(choice) {
             case 1:
            object.push();
             break;
             case 2:
            object.pop();
             break;
             case 3:
            object.display();
             break;
             case 4:
             System.exit(0);
             default:
             System.out.println("Error");
            }
        }
    }
}
