import java.util.Scanner;
public class first{
    public static void main(String[] args) {
            System.out.println("hello");
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt();
            int b = sc.nextInt();
            sc.close();
            int s = a+b;
            System.out.println("The sum is : "+s);
}
}