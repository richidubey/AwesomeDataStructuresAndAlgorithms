import java.util.Scanner;

public class Random7 {
	
	public static int N = 100000;;
	
	public static boolean prime[] = new boolean[N+1]; 
	
	public static void fix() {
		
		for(int i=0;i<N;i++) 
	        prime[i] = true; 
		
		for(int p = 2; p*p <=N; p++) 
        { 
             
            if(prime[p] == true) { 
            
                for(int i = p*2; i <= N; i += p) 
                    prime[i] = false; 
                    
            } 
        } 
	}	
		

	public static boolean isPrime(int n) {
		
		
		if(n<=1)
			return false;
		
		else if(n==2)
			return true;
		
		else if(n%2==0)
			return false;
		
		else {
			
			if(prime[n] == true)
				return true;
			
		}
		
		
		return false;
		
	}
	
	
	public static int reveal(int a, int b, int c) {
		
		int M = 0;
    while (isPrime(a*M*M + b*M + c)) {
         M++;
    }
    return M;
		
	}
	
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		fix();
		
		System.out.println("Enter the numbers");
		
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int c = scanner.nextInt();
		
		System.out.println(reveal(a,b,c));
		
		scanner.close();
	}
	
	
	
}
