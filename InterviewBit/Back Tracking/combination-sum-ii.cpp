int ans;

vector<vector<int>> s;

int cur=0;

void recurse(int a[],int n,int use[],int c,int sum,int last)
{
    bool flag;
    
    if(c>=n)
    return ;
    for(int i=last;i<n;i++)
    {
    
        if(i!=0 && a[i]==a[i-1]&&last!=i)
        continue;
        
        flag=true;
        
        for(int j=0;j<c;j++)
        {
            if(a[i]==a[use[j]]&&i==use[j])
            flag=false;
        }
        
        if(flag==true)
        {
            
            if(a[i]==sum)
            {
                ans++;
                //cout<<a[i]<<" done "<<endl;
                s[cur].push_back(a[i]);
                
        //        for(int k=0;k<s.size();k++)
        //        cout<<s[k]<<" ";
                
        //        cout<<endl;
        
                cur++;
                s.resize(cur+1);
                
                for(int i=0;i<s[cur-1].size();i++)
                s[cur]=s[cur-1];
                
                
                
                s[cur].pop_back();
                return;
            }
            else if(a[i]<sum)
            {
                use[c]=i;
                
                s[cur].push_back(a[i]);
                //cout<<a[i]<<" tested";
                
                recurse(a,n,use,c+1,sum-a[i],i+1);
                
                s[cur].pop_back();
                //cout<<"take back";
            }
            else if(a[i]>sum)
            return;
        }
        
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

ans=0;
cur=0;
s.clear();
s.resize(cur);
s.resize(cur+1);
 int n;
    
    n=A.size();
    
    
    int a[n];
    
    
    for(int i=0;i<n;i++)
    a[i]=A[i];
    
    int b;
    
    b=B;
    
    
    sort(a,a+n);
    
    
    int use[n];
    
    for(int i=0;i<n;i++)
    use[i]=-1;
    
    recurse(a,n,use,0,b,0);
    s.resize(cur);
   return s;
    
}
    

