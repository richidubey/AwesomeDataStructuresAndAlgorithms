//Que Link:https://www.interviewbit.com/problems/sorted-insert-position/

int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int low = 0;
    
    int high = A.size() - 1 ;
    
    int mid;
    
    if( B > A[high])
    return high+1;
    
    else if (B < A[low] )
    return low;
    
    while( low <= high ) {
        
        mid = ( (low + high ) / 2 );
        
        if ( B < A[mid]  )
        high = mid - 1;
        
        else if ( B == A[mid] )
        return mid;
        
        else low = mid + 1;
    }
    
    if(A[mid]==B)
    return mid;
    
    if(A[mid]<B)
    return mid+1;
    
    else return mid;
    
}

