import java.util.ArrayList;
import java.util.Scanner;

public class SherlockAndCost {


    static int cost(int[] arr){

        int sum1 = 0;
        int sum2 = 0;

        ArrayList<Integer> array1 = new ArrayList<>();
        ArrayList<Integer> array2 = new ArrayList<>();


        // for every index there are two possibilities, 1 or B[i]

        for(int i=1;i<arr.length;i++){
            int temp1 = arr[i-1] - 1;
            int temp2 = arr[i] - 1;

            int sumNew = Math.abs(arr[i] - arr[i-1]);
            int sumOld = Math.max(sum1, sum2 + temp1);
            int sumReal = Math.max(sum2 + sumNew, sum1 + temp2);

            sum1 = sumOld;
            sum2 = sumReal;
        }

        return Math.max(sum1, sum2);
    }


    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while(t-- > 0){
            int n = scanner.nextInt();
            int[] arr = new int[n];

            for(int i=0;i<arr.length;i++){
                arr[i] = scanner.nextInt();
            }

            System.out.println(cost(arr));

        }

    }
}
