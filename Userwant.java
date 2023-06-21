import java.util.Scanner;

// we will the the number of positive negative and zeros
public class Userwant {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("How many numbers do you want to give : ");
        int n = sc.nextInt();
        int negative = 0, positive = 0, zero = 0;
        for (int i = 1; i <= n; i++) {
            int nu = sc.nextInt();
            if (nu < 0) {
                negative++;
            } else if (nu > 0) {
                positive++;
            } else {
                zero++;
            }

        }
        sc.close();
        System.out.println("The count of negative is : " + negative);
        System.out.println("The count of positive is : " + positive);
        System.out.println("The count of zero is : " + zero);
    }
}
