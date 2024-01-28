import java.util.Scanner;
import java.util.Arrays;

public class Bee1181 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        var line = scanner.nextInt();
        var option = scanner.next();
        
        for (int i = 0; i < 12; i++) {
            Double[] values = new Double[12];
            
            for (int j = 0; j < 12; j++) {
                values[j] = scanner.nextDouble();
            }
                
            if(line == i) {
                System.out.println(String.format("%.1f", summationOrAvg(option, values)));
            }
        }
        
        scanner.close();
    }

    
    static double summationOrAvg(String option, Double[] values) {
        var summation = Arrays.stream(values).mapToDouble(Double::doubleValue).sum();
        return option.equals("S") ? summation : summation / 12;
    }
}
