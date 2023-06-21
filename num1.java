import java.util.Scanner;

public class num1 {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
    System.out.print("Enter number of rows : ");
    int n = sc.nextInt();
    sc.close();
    int i,j,c=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            System.out.print(c+" ");
            c++;
        }        
        System.out.println();
    }
    }
}
