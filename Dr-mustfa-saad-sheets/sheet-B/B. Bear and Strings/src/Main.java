import java.util.*;

public class Main {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        String s = sc.nextLine();
        int sum = 0;
        int st = 0;
        int ste = 0;
        int e = 0;
        for (int i = 0; i < s.length() - 3; i++) {
            if (s.charAt(i) == 'b' && s.charAt(i + 1) == 'e' && s.charAt(i + 2) == 'a' && s.charAt(i + 3) == 'r') {
                ste = i + 1;
                e = i + 4;
                sum += (ste - st) * (s.length() - e + 1);
                st = ste;
            }
        }

        System.out.println(sum);
    }
}