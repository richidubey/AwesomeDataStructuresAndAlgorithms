string counterGame(long n) {
int t=1;
    
    while(n!=1)
    {    
    
        int pos=0;
    
        long m=1;
    
        int seti=1;
    
        
        while(pos!=64)
        {
            if(n&m)
            seti=pos;
            
            
            m=m<<1;
            
            pos++;
        }
        
//        cout<<"Nearest: "<<pow(2,seti); 
        
    
        if(pow(2,seti)==n)
        n/=2;
        
        else
        n-=pow(2,seti);    
        
            t++;
    }
    
        if(t%2==0)
        return "Louise";
        
        else
        return "Richard";

}

