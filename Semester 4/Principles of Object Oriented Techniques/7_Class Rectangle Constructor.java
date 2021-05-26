class rectangleinfo {
    double l,b;
    rectangleinfo(double l, double b) {     // constructor
        this.l = l;
        this.b = b;
    }
    void disvar() {
        System.out.println("");
        System.out.println("Length of the Rectangle: " + l);
        System.out.println("Breadth of the Rectangle: " + b);
    }
    void volume() {
        double area;
        area = l*b;
        System.out.println("The area of the Rectangle is: " + area);
    }
}

class rectanglecons {
    public static void main(String args[]) {
        rectangleinfo object = new rectangleinfo(2,3);
        object.disvar();
        object.volume();
    }
}
