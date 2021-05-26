class rectangleinfo {
    double l,b;

    void getData(double l, double b) {
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

class rectangle {
    public static void main(String args[]) {
        rectangleinfo object = new rectangleinfo();
        object.getData(2,3);
        object.disvar();
        object.volume();
    }
}
