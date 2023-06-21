
//function is made to calculate average of 3 numbers
import java.util.Scanner;

public class Average {
    public static double avgFun(int a, int b, int c) {
        int av = 0;
        av = (a + b + c) / 3;
        return av;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 3 numbers : ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        sc.close();
        System.out.println("The average is : " + avgFun(a, b, c));
    }
}
