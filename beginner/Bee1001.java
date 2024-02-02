import java.util.Scanner;

public class Bee1001 {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.println(subtraction(a, b));
        scanner.close();
    }

    public static int subtraction(int a, int b) {
        return a - b;
    }


}

