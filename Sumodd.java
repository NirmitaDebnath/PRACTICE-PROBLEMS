import java.util.Scanner;

public class Sumodd {
    public static int sumOfOdd(int n) {
        int i, s = 0;
        for (i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                s = s + i;
            }
        }
        return s;

    }

    public static void main(String Args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        sc.close();
        System.out.print("The sum of odd numbers are : " + sumOfOdd(n));
    }
}
