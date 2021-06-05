// Develop a java program to create an abstract class named Shape that contains two
// integers and an empty method named printArea(). Provide three classes named Rectangle,
// Triangle and Circle such that each one of the classes extends the class Shape. Each one of
// the classes contain only the method printArea( ) that prints the area of the given shape.

abstract class shape {

    int r = 2;
    int b = 3;

    abstract void printarea();
    
}

class rectangle extends shape {

    void printarea(){
        double area =  r*b;
        System.out.println("Area of rectangle is: " + area);
    }
}

class triangle extends shape {

    void printarea(){
        double area =  r*b/2;
        System.out.println("Area of triangle is: " + area);
    }
}

class circle extends shape {
    
    void printarea() {
        double area = 3.14*r*r;
        System.out.println("Area of circle is: " + area);
    }
}

class shapee {
    public static void main(String args[]) {
        circle obj = new circle();
        rectangle obj2 = new rectangle();
        triangle obj3 = new triangle();
        obj.printarea();
        obj2.printarea();
        obj3.printarea();
    }
}
