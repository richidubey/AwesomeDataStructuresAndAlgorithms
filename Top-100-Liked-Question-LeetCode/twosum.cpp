//Questions Link  : https://leetcode.com/problems/two-sum/submissions/

#include<bits/stdc++.h>
class Solution {
public:
    int findme(vector<int>a ,int b,int skip)
    {
        for(int i=0;i<a.size();i++)
            if(a[i]==b && i!=skip)
                return i;
        
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
     
        vector<int>prev=nums;
        sort(nums.begin(),nums.end());
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            cout<<"WOW i="<<i<<endl;
            if(binary_search(nums.begin()+i+1,nums.end(),target-nums[i]))
            {
                cout<<"Binary said YES!\n";
               
                if(target==(2*nums[i]))
                { 
                    cout<<"And it is double too!\n";
                    int flag=false;
                 
                        for(int j=i+1;j<nums.size();j++)
                        {
                            if(nums[j]==target-nums[i])
                            {   flag=true;
                                break;
                            }
                        }
                    
                    if(flag==false)
                    {
                        cout<<"Flag false for i="<<i<<endl;
                        continue;
                    }
                    cout<<"Hello by "<<i<<endl;
                }
                
                int ret=findme(prev,nums[i],-1);
                ans.push_back(ret);
                
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]==target-nums[i])
                        
                    {    ret=findme(prev,nums[j],ret);
                        ans.push_back(ret);
                        break;
                    }
                }
                break;
            }
        }
         return ans;
    }
    
   
};
