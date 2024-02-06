import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;


public class Bee1259 {
    private static void printAlgorithm(List<Integer> numbers) {
        List<Integer> evens = new ArrayList<>();
        List<Integer> odds = new ArrayList<>();


        numbers.forEach(number -> {
            if (number % 2 == 0) {
                evens.add(number);
            }

            else odds.add(number);
        });

        
        evens.sort(Comparator.naturalOrder());
        odds.sort(Comparator.reverseOrder());

        evens.forEach(number -> {
            System.out.println(number);
        });


        odds.forEach(number -> {
            System.out.println(number);
        });
    }



    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        var n = scanner.nextInt();
        
        List<Integer> numbers = new ArrayList<>();


        for (int i = 0; i < n; i++) {
            numbers.add(scanner.nextInt());
        }

        printAlgorithm(numbers);

    }    
}