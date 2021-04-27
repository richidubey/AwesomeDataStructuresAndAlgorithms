 //Que Link:https://www.interviewbit.com/problems/prime-sum/
 
 vector<int> Solution::primesum(int A) {

    vector<bool>primes(A,0);
    int next=2;
    
    int sqr=sqrt(A);
    
    int j;
    
    primes[1]=1;
    for(int i=2;i<=sqr;i++) {
        
        if(primes[i]==1)
            continue;
        
        for(j=i*i;j<A;j+=i)
        {
            primes[j]=1;
        }
    }
    
    vector <int> vec;
    for(int i=2;i<A;i++) {
        if( (primes[i]==0) && (primes[A-i]==0) ) {
            vec.push_back(i);
            vec.push_back(A-i);
            return vec;
        }
    }
    
    return vec;
}

