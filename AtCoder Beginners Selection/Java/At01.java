//printfをした場合
import java.util.Scanner;

public class At01 {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        String s = scanner.next();
        int sum = a + b + c;
        System.out.printf("%d %s", sum, s);
        scanner.close();
    }
}

/* printlnを使用した場合
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        String s = scanner.next();
        int sum = a + b + c; 
        System.out.println(sum + " " + s);
        scanner.close();
    }
}*/
