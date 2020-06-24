vector<int> Solution::equal(vector<int> &A) {

    vector<int> ret;
    
    vector<int> curr;
    
    map<int, pair<int,int>> sum;
    
    
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            if( sum.find(A[i]+A[j])==sum.end() ) 
            sum[A[i]+A[j]]=make_pair(i,j);
            
            else if(sum[A[i]+A[j]].first< i && sum[A[i]+A[j]].second != i && sum[A[i]+A[j]].second!=j)
            {
                if(ret.size()==0)
                {
                    ret.push_back(sum[A[i]+A[j]].first);
                    ret.push_back(sum[A[i]+A[j]].second);
                    ret.push_back(i);
                    ret.push_back(j);
                }
                else
                {
                    curr.push_back(sum[A[i]+A[j]].first);
                    curr.push_back(sum[A[i]+A[j]].second);
                    curr.push_back(i);
                    curr.push_back(j);
                    
                    for(int k=0;k<ret.size();k++)
                    {
                        if(ret[k]<curr[k])
                        break;
                        
                        if(ret[k]==curr[k])
                        continue;
                        
                        
                        ret=curr;
                        break;
                        
                    }
                    
                    curr.clear();
                    
                    
                }
                
             //   return ret;
            }
        }
    }
    return ret;
    
}
