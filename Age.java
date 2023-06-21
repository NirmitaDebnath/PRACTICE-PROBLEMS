import java.util.Scanner;

public class Age {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter the age : ");
        int n = sc.nextInt();
        sc.close();
        if(n>=0 && n<=3){
            System.out.println("Child");
        }
        else if (n>3 && n<=18){
            System.out.println("Student");
        }
        else if(n>18 && n<=60){
            System.out.println("Responsible Adult");
        }
        else if(n>60 && n<=100){
            System.out.println("Senior citizen");
        }
        else {
            System.out.println("Wrong Age");
        }
    }
}
