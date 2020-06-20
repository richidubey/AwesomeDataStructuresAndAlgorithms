vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    vector<map<char,int>> lis(A.size());
    
//    cout<<"Hello"<<endl;
    
    
    map<char,int>pcurr;
    
    for(int i=0;i<A.size();i++)
    {
        pcurr.clear();
        for(int j=0;j<A[i].size();j++)    
        {
            pcurr[A[i][j]]++;
        }
        lis[i]=pcurr;
    }
    
    // for(int i=0;i<A.size();i++)
    // {
    //   cout<<"Map "<<i+1<<" is:"<<endl;
       
    //   for(map<char,int>::iterator it=lis[i].begin();it!=lis[i].end();it++)
    //     {
    //         cout<<it->first<<" : "<<it->second<<endl;
    //     }
    //     cout<<endl;
        
    // }
    
    
    vector<vector<int>>ret;
    
   vector<bool>done(A.size(),false);
    
    map<char,int> comp;
    for(int i=0;i<A.size();i++)
    {
        vector<int> curr;
        curr.clear();
     
  //   cout<<"Inside "<<i<<endl;
         if(done[i]==false)
         {
             comp=lis[i];
           
           for(int j=0;j<A.size();j++)
                {
                //    cout<<"Checking "<<i<<" with "<<j<<endl;
                    if(lis[j]==comp)
                    {
                        done[j]=true;
              //          cout<<"Matched "<<j<<endl;
                        curr.push_back(j+1); 
                    }
                }
            //    cout<<"Pushing curr"<<endl;
                ret.push_back(curr);
             
         }  
        
        
    }
    
    return ret;
    
}

