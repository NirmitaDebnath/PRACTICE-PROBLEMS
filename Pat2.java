import java.util.*;

public class Pat2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int n = sc.nextInt();
        sc.close();
        int i, j;
        // ****
        // ****
        // ****
        // ****
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

    }

}
