class command {
    public static void main(String args[]) {
        String a = args[0];
        int x = Integer.parseInt(a);
        if(x>0) {
            System.out.println("The entered number is Positive");
        }
        else {
            System.out.println("The entered number is Negative");
        }
    }
}
