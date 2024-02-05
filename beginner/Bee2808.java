import java.util.Scanner;

public class Bee2808 {
    private static boolean possibleMoviment(int startLine, int startColumn, int endLine, int endColumn) {
        return (
            Math.abs(endLine - startLine) == 2 && Math.abs(endColumn - startColumn) == 1 ||
            Math.abs(endColumn - startColumn) == 2 && Math.abs(endLine - startLine) == 1
        );
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        var startCoordinate = scanner.next();
        var endCoordinate = scanner.next();

        if (possibleMoviment(
                startCoordinate.charAt(0), startCoordinate.charAt(1),
                endCoordinate.charAt(0), endCoordinate.charAt(1)
        )) { 
            System.out.println("VALIDO");
        }

        else {
            System.out.println("INVALIDO");
        }


        scanner.close();
    }
}
