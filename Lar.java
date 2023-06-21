import java.util.Scanner;

public class Lar {
    public static double largestOf2(double a, double b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 2 numbers : ");
        double a = sc.nextInt();
        double b = sc.nextInt();
        sc.close();
        System.out.println("The Largest is : " + largestOf2(a, b));

    }
}
