import java.util.Scanner;
import java.util.Arrays;

public class Bee1132 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        Integer[] interval = new Integer[2];
        interval[0] = scanner.nextInt();
        interval[1] = scanner.nextInt();

        Arrays.sort(interval);

        System.out.println(summationMultiple13(interval[0], interval[1]));
        scanner.close();
    }


    private static Integer summationMultiple13(Integer start, Integer end) {
        var acc = 0; 

        for (Integer value = start; value <= end; value ++) {
            if (value % 13 != 0) {
                acc += value;
            }
        }

        return acc;
    }
}