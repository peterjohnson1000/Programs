// Write a program to read a number as command line argument and
// a. Find square of the number using static function
// b. Find cube of the number using static function

class staticinfo 
{
    static int s;
    static int c;

    static void square(int x) {    //static funciton to find square
        s = x * x;
        System.out.println("Square is " + s);
    }

    static void cube(int y) {   //static funciton to find cube
        c = y * y * y;
        System.out.println("Cube is " + c);
    }
}
class staticc
{
    public static void main(String args[]) 
    {
        String a = args[0];  //reading input from command line
        int x = Integer.parseInt(a);
        staticinfo.square(x);
        staticinfo.cube(x);
    }
}
