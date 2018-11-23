import java.util.Scanner;

class Compiler {

	public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in); //Yes, I use Scanner. Why? Because delay due to scanner isn't much
		
		//System.out.println("Enter the test cases number");
		int t = scanner.nextInt();
		
		scanner.nextLine();
		
		while(t-->0) {
    
			String s = scanner.nextLine();
			
			int count=0;
			int ans = 0;
			
			for(int i=0;i<s.length();i++){
				
	    		if(s.charAt(i) == '>')
	    			count--;
	    		
	    		else
	    			count++;

	    		
	    		if(count == 0)
	    			ans = i+1;
	    		
	    		else if(count < 0)
	    			break;
	    	}
			
			
	    	System.out.println(ans);
			
			
		}

		scanner.close();
		
	}
	

}
