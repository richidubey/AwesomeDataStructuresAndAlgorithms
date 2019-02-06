#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int flag1=1,flag2=1,i=0,flag3=1;
    int len1,len2;
    len1=s1.length();
    len2=s2.length();
    while(true)
    {
        if(i>len1)
        {
            flag1=0;
            break;
        }
        if(i>len2)
        {
            flag2=0;
            break;
        }
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            {
                i++;
                continue;
            }
            else
            {
                cout<<"No"<<endl;
                flag3=0;
                break;
            }
        }
        else if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
        {
            if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
            {
                i++;
                continue;
            }
            else
            {
                cout<<"No"<<endl;
                flag3=0;
                break;
            }
        }
        i++;
    }
    if(flag1==0)
    {
        while(i<=len2)
        {
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            {
                cout<<"No"<<endl;
                flag3=0;
                break;
            }
            i++;
        }
    }
    if(flag2==0)
    {
        while(i<=len1)
        {
            if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
            {
                cout<<"No"<<endl;
                flag3=0;
                break;
            }
            i++;
        }
    }
    if(flag3)
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}

