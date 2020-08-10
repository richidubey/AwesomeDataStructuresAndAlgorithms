//Que Link:https://www.interviewbit.com/problems/matrix-search/

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
    
 //  cout<<"Checking limits "<<A[0][0]<<" and "<<A[A.size()-1][A[0].size()-1]<<endl;
    if(A[0][0]>B || A[A.size()-1][A[0].size()-1]<B)
    return 0;
    
    
    int low=0;
    int high=A.size()-1;
    
    int mid;
    
    while(low<=high)
    {
        mid = ( low + high ) /2;    
        
       
        if(A[mid][A[0].size()-1] >= B && A[mid][0] <= B)
            break;
            
        else if( A[mid][A[0].size()-1] < B)
        low=mid+1;
        
        else high = mid-1;
    }
    
    
    
    //  cout<<" First mid is "<<mid<<"which is "<<A[mid][0]<<endl;
       
  // cout<<"So checking against limits "<<(A[mid][0])<<"and "<<A[mid][A[0].size()-1]<<endl;
    
    if(A[mid][0]>B || A[mid][A[0].size()-1]<B )
    return 0;
    
    low = 0;
    high = A[0].size()-1;
    
 
    int nmid;
    
    while(low<=high) {
        
//        cout<<"nmid is "<<nmid<<" which is "<<A[mid][nmid]<<endl;
        nmid = (low+high)/2;
        
        if(A[mid][nmid] < B )
            low = nmid+1;
        
        else if(A[mid][nmid]==B)
            break;
        
        else high = nmid-1;
    }
    
 // cout<<" First nmid is "<<nmid<<"which is "<<A[mid][nmid]<<endl;
    
    if(A[mid][nmid]==B)
    return 1;
    
    return 0;
    
}


