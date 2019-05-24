#include<iostream>
#include<vector>

using namespace std;

struct Node
{
	struct Node* left;
	struct Node* right;
	int data;
	
	Node(int k)
	{
		left=NULL;
		right=NULL;
		data=k;
	}
};

void inorder(Node *root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";	
	inorder(root->right);
};
vector<char> path;

int found=0;

void search(int k,Node *root)
{
	if(found==1)
	return ;
	
	if(root==NULL)
	return ;
	
	if(root->data==k)
	{
		found++;
		return;
	}
	
	
	//cout<<"\nSearching for "<<k<<" currently at :"<<root->data;
	
	//cout<<"\n and path : ";
	
	//for(int i=0;i<path.size();i++)
	//cout<<path[i];
	// 
	path.push_back('L');
	search(k,root->left);
	
		
	if(found==1)
	return ;
	
	else
	path.pop_back();
	
	
	path.push_back('R');
	search(k,root->right);
	
	
	if(found==1)
	return ;
	
	else
	path.pop_back();
}

int main()
{
	int n,q;
	
	cin>>n>>q;
	
	Node *a[n+1];
	
	for(int i=1;i<=n;i++)
	{
		a[i]=new Node(i);
	}
	
	int b,c;
	char d;
	
	for(int i=0;i<n-1;i++)
	{
		cin>>b>>c>>d;
		
		if(d=='L')
		{
			a[b]->left=a[c];	
		}		
		else
		{
			a[b]->right=a[c];
		}
	}
	
	//inorder(a[1]);
	
	int temp;
	
	Node *tra;
	
	int flag=0;
	
	for(int i=0;i<q;i++)
	{
		found=0;
		flag=0;
		cin>>temp;
		search(temp,a[1]);
	//	cout<<"nice!";
		tra=a[1];
		
	//	cout<<"\nPath After Search : ";
	//
	//for(int i=0;i<path.size();i++)
	//cout<<path[i];
		
		
		for(int j=0;j<path.size();j++)
		{
			if(tra==NULL)
			{
				cout<<-1<<endl;
				flag++;
				break;
			}
			if(path[j]=='L')
			{
				tra=tra->right;
			}
		
			else if(path[j]=='R')
			{
				tra=tra->left;
			}
		}
		
		if(flag==0)
		{
			if(tra==NULL)
			cout<<-1<<endl;
			else
			cout<<tra->data<<endl;
		}
		path.clear();
	}
}
