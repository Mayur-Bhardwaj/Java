class Primitive{
    public static void main(String[] args) {
        Integer x1 = 400;Integer x2=400;
        if(x1 == x2)
            System.out.println("Same");
        else
            System.out.println("Not Same");
    }
}

//Output:-      Not Same


class Test{
    public static void main(String[] args) {
        int x1 = 10;
        Integer x2 = x1;    //AutoBoxing
        int x3 = x2;        // Auto-Unboxing
        System.out.println(x1);
        System.out.println(x2);
        System.out.println(x3);
    }
}