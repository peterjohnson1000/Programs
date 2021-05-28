// Develop a Java program to implement functions to display an input integer, string and
// float values using the concept of method overloading.

class methodoverinfo {
    int i;
    double j;
    String k;

    void input(int i) {
        this.i = i;
        System.out.println(i + " Integer Entered");
    }

     void input(double j) {
        this.j = j;
        System.out.println(j + " Float Entered");
    }

      void input(String k) {
        this.j = j;
        System.out.println(k + " String Entered");
    }
}

class methodover {
    public static void main(String args[]) {
        methodoverinfo object = new methodoverinfo();
        object.input(5);
        object.input(3.5);
        object.input("Hello World");
    }
}
