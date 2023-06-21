import java.util.Scanner;

public class Circumference {
    public static double circumferenceOfCircle(double r) {
        double c = 2 * 3.14 * r;
        return c;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The radius of the circle : ");
        double r = sc.nextDouble();
        sc.close();
        System.out.println("The circumference is : " + circumferenceOfCircle(r));
    }
}
