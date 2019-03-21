#include<iostream>
using namespace std;

struct Node
{
	struct Node *up;
	int data;
	
	Node(int k)
	{
		up=NULL;
		data=k;
	}
};

typedef struct Node Node;

int main()
{
		
	int n;
	
	cin>>n;
	
	Node* a[n+1];

	for(int i=1;i<=n;i++)
	{
		a[i]=new Node(i);
	}
	
	int temp;
	
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		if(temp!=-1)
		{
			a[i]->up=a[temp];
		}
	}
	
	int k,max=0;
	
	Node *tra;
	
	for(int i=1;i<=n;i++)
	{
		k=0;
		
		tra=a[i];
		while(tra!=NULL)
		{
			k++;
		//	cout<<"\nK increased for tra : "<<tra->data;
			tra=tra->up;
			
		}
		
		//cout<<endl;
		if(max<k)
		max=k;
		
	}
	
	cout<<max<<endl;







	
	return 0;
	
}
