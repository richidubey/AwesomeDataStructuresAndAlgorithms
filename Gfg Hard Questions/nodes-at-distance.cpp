 set <int> s;
   void printdistanceNodeDown(node *root, int k,int lev)
{

    if(root==NULL)
    return;
    
     printdistanceNodeDown(root->left,k,lev+1);
     
     if(lev==k)
    {
        cout<<root->data<<" ";
    
        s.insert(root->data);
    }
     
     printdistanceNodeDown(root->right,k,lev+1);
   
    
}

void printkdistanceNodeDown(node *root, int k)
{

    
     printdistanceNodeDown(root, k,0);
   
    
}
/* Prints all nodes at distance k from a given target node.
 The k distant nodes may be upward or downward.  This function
 Returns distance of root from target node, it returns -1 if target
 node is not present in tree rooted with root. */
 map <int,pair<int,int>> dis;
 void getdis(node* root,int lef,int rig)
 {
     if(root==NULL)
     return;
     
     getdis(root->left,lef+1,rig);
     
     dis[root->data]=make_pair(lef,rig);
     
     getdis(root->right,lef,rig+1);
 }
 void getdisr(node* root,int lef,int rig)
 {
     if(root==NULL)
     return;
     
     getdisr(root->left,lef-1,rig);
     
     dis[root->data]=make_pair(lef,rig);
     
     getdisr(root->right,lef,rig-1);
 }
 
int printkdistanceNode(node* root, node* target , int k)
{
// Your code here
    dis.clear();
    s.clear();
    getdis(root->left,1,0);
    
    dis[root->data]=make_pair(0,0);
    getdisr(root->right,0,-1);
    
   // dis[root->data]=make_pair(0,0);
    
    if(dis.find(target->data)==dis.end())
    return -1;
    
    printkdistanceNodeDown(target,k);
    
    //cout<<"lalal";
    
    int j=0;
    bool flag=false;
   // cout<<"Target is : "<<dis.find(target->data)->first<<" with "<<dis.find(target->data)->second.first<<","<<dis.find(target->data)->second.second<<endl;
    for(map <int,pair<int,int>> :: iterator it=dis.begin();it!=dis.end();it++)
    {
      //  cout<<"\n*Checking :"<<it->first<<" with "<<it->second.first<<","<<it->second.second<<endl;
        if((dis.find(target->data)->second.first>0&it->second.first>0)||(it->second.second<0&&dis.find(target->data)->second.second<0))
        {
            
            if(abs(dis.find(target->data)->second.first - it->second.first)+abs(dis.find(target->data)->second.second-it->second.second)==k)
            {
                if(it!=dis.find(target->data)&&(!s.count(it->first)))
                cout<<it->first<<" ";
            }
            
            j=1;
        }
        
        else
        {
            if(j==1&&!flag)
            {
                if(abs(dis.find(target->data)->second.first)+abs(dis.find(target->data)->second.second)==k)
                cout<<root->data<<" ";
                
                flag=true;
            }
            if(abs(dis.find(target->data)->second.first)+abs(dis.find(target->data)->second.second)+abs(it->second.second)+abs(it->second.first)==k)
            {
                 if(it!=dis.find(target->data)&&(!s.count(it->first))&&it->first!=root->data)
                cout<<it->first<<" ";
            }
            
        }
    }
    
    if(!flag&&abs(dis.find(target->data)->second.first)+abs(dis.find(target->data)->second.second)==k)
                cout<<root->data<<" ";
    
    
    
    
    
    return dis.find(target->data)->second.first+dis.find(target->data)->second.second;
}


