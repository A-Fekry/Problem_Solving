import java.util.*;

public class Main{

    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int n = sc.nextInt();
        int m = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = 0;
        }
        for(int i = 0; i < m; i++){
            int ower = sc.nextInt();
            int owen = sc.nextInt();
            int dept = sc.nextInt();
            arr[owen - 1] += dept;
            arr[ower - 1] -= dept;
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                sum += arr[i] * (-1);
            }
        }
        System.out.println(sum);
    }

}