// Write a program to demonstrate division by zero exception.

class exception {
    public static void main(String args[]) {
        int c;
        String a = args[0];
        String b = args[1];
        int x = Integer.parseInt(a);
        int y = Integer.parseInt(b);
        try {
            c = x/y;
            System.out.println("a/b = " + c);
        }
        catch(ArithmeticException e) {
            System.out.println("Exception Encountered " + e);
        }
    }
}
