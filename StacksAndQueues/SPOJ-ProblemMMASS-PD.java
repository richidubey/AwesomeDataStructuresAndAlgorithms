import java.util.Scanner;
import java.util.Stack;

public class MolMass {
	
	static Stack<Integer> st = new Stack<Integer>();
	
	
	public static int addMass(char ch) {
	
		if(ch=='H')
			return 1;
		
		else if(ch=='C')
			return 12;
		
		else if(ch=='O')
			return 16;
		
		else
			return 0;
	
	}
	
	public static void main(String[] args) {
		
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("MASS IN");
		
		String s = scanner.nextLine();
		
		int v;
		
		for(int i=0;i<s.length();i++) {
			
			if(Character.isDigit(s.charAt(i))) {
				
				v = st.peek();
				st.pop();
				
				st.push((v*(s.charAt(i)-'0')));
				
			}
			
			else if(s.charAt(i)=='(')
				st.push(-1);
				
			else if(s.charAt(i)==')'){
				
				v=0;
				while(!st.empty() && st.peek()!=-1) {
					
					v+=st.peek();
					st.pop();
					
				}
				
				st.pop();
				st.push(v);
				
			}
			
			else if(Character.isAlphabetic(s.charAt(i))) {
				
				st.push(addMass(s.charAt(i)));
				
			}
				
		}
		
		v=0;
		
		while(!st.empty()) {
			
			v+=st.peek();
			st.pop();
			
		}
			
		System.out.println("MASS OUT");
		System.out.println(v);
		
		scanner.close();
		
	}
	
	
}
