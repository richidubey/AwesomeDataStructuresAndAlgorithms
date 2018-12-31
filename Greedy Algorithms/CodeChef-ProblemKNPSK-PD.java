import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Random39 {
	
	public static void main(String[] args){
		
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter");
        
        int n = scanner.nextInt();
        int w=0;

        ArrayList<Long> ones = new ArrayList<>();
        ArrayList<Long> twos = new ArrayList<>();

        for(int i=0;i<n;i++){
        	
            int wt = scanner.nextInt();
            long c = scanner.nextLong();
            
            w += wt;

            if(wt==1) ones.add(c);
            else twos.add(c);
        }

        Collections.sort(ones,Collections.reverseOrder());
        Collections.sort(twos,Collections.reverseOrder());
        
        int i=0,j=0;
        long ans=0;
        int cw=0;

        for(int k=1;k<=w;k++){
            long ans1=ans, ans2=ans;

            if(k-cw==1) {
                if (i < ones.size()) ans1 += ones.get(i);
                if (i >= 1 && j < twos.size()) ans2 = ans2 - ones.get(i - 1) + twos.get(j);

                if (ans1>ans && ans1>=ans2) {
                    i++;
                    ans = ans1;
                    cw++;
                } 
		else if (ans2 > ans) {
                    i--;
                    j++;
                    ans = ans2;
                    cw++;
                }
            }

            else if(j<twos.size()){ans += twos.get(j); j++; cw+=2;}

            System.out.print(ans + " ");
        }
       
        scanner.close();
    }
}
