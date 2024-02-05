import java.util.Scanner;

public class Bee1024 {

    private static String encrypt(String string) {
        String step1, step2, step3;

        step1 = "";
        step2 = "";
        step3 = "";

        // step 1
        for (char c : string.toCharArray()) {

            if (Character.isLetter(c)) {
                step1 += (char) (c + 3);
                continue;
            }
            step1 += (char) c;
        }

        // step 2
        step2 = new StringBuilder(step1).reverse().toString();
        
        // step 3
        for (int i = 0; i < step2.length(); i++) {
            char c = step2.charAt(i);

            if (i < step2.length() / 2) {
                step3 += c;
                continue;
            }

            step3 += (char) (c - 1);
        }
        
        return step3;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string;
        
        int n = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < n; i ++) {
            string = scanner.nextLine();
            System.out.println(encrypt(string));
        }
        
        scanner.close();
    }
}