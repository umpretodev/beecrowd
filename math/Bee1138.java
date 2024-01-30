import java.io.IOException;
import java.util.Scanner;

public class Bee1138 {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);

        var A = -1;
        var B = -1;

        while (true) {
            A = scanner.nextInt();
            B = scanner.nextInt();
        
            if (A == 0 && B == 0)
                return;

            answer(A, B);
        }
        
    }

    public static void answer(int A, int B) {
        int[] array = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for (int i = A; i <= B; i++) {
            String[] numbers = String.valueOf(i).split("");
            
            for (String number : numbers) {
                switch (number) {
                    case "0":
                        array[0]++;
                        break;
                    case "1":
                        array[1]++;
                        break;
                    case "2":
                        array[2]++;
                        break;
                    case "3":
                        array[3]++;
                        break;
                    case "4":
                        array[4]++;
                        break;
                    case "5":
                        array[5]++;
                        break;
                    case "6":
                        array[6]++;
                        break;
                    case "7":
                        array[7]++;
                        break;
                    case "8":
                        array[8]++;
                        break;
                    case "9":
                        array[9]++;
                        break;
                    default:
                        break;
                }
            }
        }

        for (int i = 0; i < 10; i++) {
            if (i == 9) {
                System.out.println(array[i]);
                return;
            }

            System.out.printf("%d ", array[i]); 
        }
        
    }
   
}
