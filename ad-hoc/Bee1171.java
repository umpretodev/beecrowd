import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Bee1171 {
    public static void answer(Map<Integer, Integer> hashMap) {
        List<Integer> values = new ArrayList<>(hashMap.keySet());

        Collections.sort(values);

        values.forEach(index -> {
            System.out.println(String.format("%d aparece %d vez(es)", index, hashMap.get(index)));
        });
    }

    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Map<Integer, Integer> hashMap = new HashMap<>();

        // Input n
        var n = scanner.nextInt();

        // Input values(n)
        for (int i = 0; i < n; i++) {
            var index = scanner.nextInt();

            if (hashMap.containsKey(index)) {
                hashMap.put(index, hashMap.get(index) + 1); 
                continue;
            } 

            hashMap.put(index, 1);
        }

        // Answer method
        answer(hashMap);
        scanner.close();
    }
}
