import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num;

        num = scanner.nextInt();
        if (num % 2 == 0) {
                System.out.printf("%d is even%n", num);
        } else {
                System.out.printf("%d is odd%n", num);
        }
        scanner.close();
    }

}
