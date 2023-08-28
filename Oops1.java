class Oops{
    int student_id;
    String student_name;
    String student_city;

    // Behaviour or methods

   public void study(){
        System.out.println(student_name + " is studying");
    }

    public void studentDetails(){
        System.out.println("My Name is " + student_name);
        System.out.println("My Id is " + student_id);
        System.out.println("My City is " + student_city);
    }
}
    public class Oops1{
        public static void main(String args[]){
           
           // Now we creating the object of the student class.
           
            Oops o1;
            o1 = new Oops();
            o1.student_id = 12;
            o1.student_name = "Mayur Bhardwaj";
            o1.student_city = "Ghaziabad";
            o1.study();
            o1.studentDetails();
        }
    }




