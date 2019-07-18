void bottomView(Node *root)
{
  queue<pair<Node*,int>> q;
  
  q.push(make_pair(root,200));
  
  vector<int>ans;
  
  int mi=INT_MAX,ma=0;

    while(q.size())
    {
        if(ans.size()<=q.front().second)
        ans.resize(q.front().second+1);
        
        mi=min(mi,q.front().second);
        ma=max(ma,q.front().second);
        
        ans[q.front().second]=q.front().first->data;
        
        if(q.front().first->left!=NULL)
        q.push(make_pair(q.front().first->left,q.front().second-1));
        
        if(q.front().first->right!=NULL)
        q.push(make_pair(q.front().first->right,q.front().second+1));
        
        q.pop();
    }
    
   // for(auto i: ans)
//    cout<<i<<" ";

for(int i=mi;i<=ma;i++)
cout<<ans[i]<<" ";
}
