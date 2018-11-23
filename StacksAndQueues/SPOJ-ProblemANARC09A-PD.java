import java.util.Scanner;

public class Stable {

	public static int isStableOrNot(String s) {
		
		int a=0,b=0;
		
	    for(int i=0;i<s.length();i++){
	    	
	      if(s.charAt(i)=='{') 
	    	  b++;
	        
	      
	      else if (b>0)
	    	  b--;
	      
	      else{
	    	  
	        b++;
	        a++;
	        
	      }
	      
	    }
	    
	    a+=b/2;
	    
	    
	    return a;
		
	}
	
	
	public static void main(String[] args) {
		
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the string");
		
		String s = "";
		int count = 1;
		
		while(true) {
			
			s = scanner.nextLine();
			
			if(!s.contains("-")) {
				
				System.out.print(count+". ");
				
				System.out.println(isStableOrNot(s));
				count++;
			}
			else
				break;
			
		} 
		
		scanner.close();
		
	}
	
 
}
