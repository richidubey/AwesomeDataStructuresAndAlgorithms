set <string> sans;

void genip(string s,int dots,int mark,string ans)
{
	if(mark==s.size()&&dots==3)
	{
		int c=0,m=0;
		if(ans[ans.size()-1]=='.')
		return;
		
		for(int j=ans.size()-1;j>=0;j--)
		{
			if(ans[j]=='.')
			{
		//		cout<<c<<endl;
				c=0;
				m=0;
			}
			else
			{
			
				c+=pow(10,m)*(ans[j]-'0');
				m++;
			}
			if(ans[j]=='0'&&j!=0&&ans[j-1]=='.'&&j!=ans.size()-1&&ans[j+1]!='.')
			return;
			
			if(c>255)
			return;
		}
		
		sans.insert(ans);
		//cout<<ans<<endl;
		return;
	}
	
	
	for(int i=mark;i<s.size();i++)
	{
		ans.push_back(s[i]);
		genip(s,dots,i+1,ans);	
		if(dots<3)
		{
			ans.push_back('.');
			genip(s,dots+1,i+1,ans);
			ans.pop_back();
		}
		
		
	}
	 
	
	
	
	
}

vector<string> genIp(string s)
{
    sans.clear();
    string ans="";
    vector<string>ret;
    
    if(s.size()<4||s.size()>12)
    return ret;
    
    genip(s,0,0,ans);
    //Your code here
    
    
    
    
    
    for(set<string>::iterator it=sans.begin();it!=sans.end();it++)
    ret.push_back(*it);
    
    return ret;
    
    
}
