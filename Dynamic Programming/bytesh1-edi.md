Solving this took more than 2 days for me, so it might be hard for you too :)    
    
    Notations used : 
    
    f(n) : N (2*N) tiles completely filled. Which would be our ans.
    g(n) : N tiles completely filled except for the top right square : Looks like :
    		
    	        	n-1 times   Last Tile
    	         	F           E
    	        	F           F
    		
    		F is a full square while E is empty.
    
    h(n) : Similar to g(n) with bottom right square unfilled: 
    
    
    	        	n-1 times   Last Tile
    	         	F           F
    	        	F           E
    		
    		F is a full square while E is empty.
    		
    		
    
Solution :

> f(n) = f(n-1)+f(n-2) + h(n-1) + g(n-1) as :    
 
    
    f(n-1) : all filled completely except the nth tile, Just use One more tile to fill up the last one. So f(n) can be made from all of f(n-1)s using one extra 2*1 vertical tile.    
     f(n-1) : all filled completely except the nth and (n-1)th tile, Just use two more tiles (horizontally on top of each other) to fill up the last two tiles. So f(n) can be made from all of f(n-1)s using two extra 2*1 horizontal tile.
     
     g(n-1): All filled except the nth tile and the top right of n-1th tile. So use one of the L tiles.
     
     Similarly for h(n-1), use inverted L. Also g(n-1)=h(n-1)    
 
     
     So, f(n)=f(n-1)+f(n-2)+h(n-1)+g(n-1);
     

> g(n) = f(n-2) + h(n-1) as : 

	f(n-2) : Completely filled except the last two tiles(from n * 2), so use an inverted L from the 2nd last tile to get g(n);
	h(n-1) : Completely filled except the last tile and bottom right of second last tile. Use a 2*1 horizontal tile on bottom to get g(n) which is completely filled except top right.
	
	Since h(n-1) = g(n-1)    
	
	
	g(n)=f(n-2)+g(n-1)!!        
	
	
	
	If you still have difficulty understanding, mail me at my mailing addressa and I'll get back to you.
	
    
    
