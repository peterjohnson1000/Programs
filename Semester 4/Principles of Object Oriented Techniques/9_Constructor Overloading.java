// Write a program that creates a class rectangle with instance variables for the length and
// the breadth. Initialize and display its variables. Use constructor overloading to initialize
// variables. First constructor is without argument (Set a default value here). Second
// constructor is with one argument (In this case make it a square) Third constructor is with
// two arguments. Also find the area of rectangle.

class consoverinfo {
    double l; //length
    double b; //breadth
    double s; //square

    consoverinfo() {
        l = 3;
        b = 2;
        System.out.println("Length = " + l);
        System.out.println("Breadth = " + b);
    }

    consoverinfo(double s) {
        double square = s * s;
        System.out.println("Square is: " + square);
    }

    consoverinfo(double l, double b) {
        double area = l * b;
        System.out.println("Area of rectangle is: " + area);
    }    
}

class consover {
    public static void main(String args[]) {
        consoverinfo object = new consoverinfo();
        consoverinfo object1 = new consoverinfo(5);
        consoverinfo object2 = new consoverinfo(3,2);
    }
}
