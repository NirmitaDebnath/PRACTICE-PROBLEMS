import java.util.Scanner;

public class Pat4 {
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int n = sc.nextInt();
        int i, j,c;
        for (i = 1; i <= n; i++) {

            for (j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            c = 2 * (n - i);
            for (j = c; j >= 1; j--) {
                System.out.print("  ");

            }
            for (j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();

        }

        for (i = n; i >= 1; i--) {

            for (j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            c = 2 * (n - i);
            for (j = c; j >= 1; j--) {
                System.out.print("  ");

            }

            for (j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();

        }
    }
}
