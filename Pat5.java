import java.util.Scanner;

public class Pat5 {
//           * * * * * * 
//         * * * * * * 
//       * * * * * * 
//     * * * * * * 
//   * * * * * * 
// * * * * * * 
public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);
    System.out.print("Enter a number : ");
    int n = sc.nextInt();
    sc.close();
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j<=n-1;j++){
            System.out.print("  ");
        }
        for(j=1;j<=n;j++){
            System.out.print("* ");
        }
        System.out.println();
    }
        
    }
}
