// Implementation using inner classes: Write a program to initialise a number, use outer
// class. To check whether the number is even or odd use inner class.


class outer {
    int a;

    void initialize(int x) {  // method to initialize the variable a
        this.a = x;
    }

    class inner {
        void check() { 
            if(a % 2 == 0)
            {
                System.out.println(a + " is an Even number");
            }
            else 
            {
                System.out.println(a + " is an Odd number");
            }
        }
    }
}

class control {
    public static void main(String args[]) {
        outer obj1 = new outer();
        outer.inner obj2 = obj1.new inner();

        obj1.initialize(2);
        obj2.check();
    }
}
