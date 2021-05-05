//Solution without driver code present in the same folder as this code. Look for code without with-driver-* prefix.

//Que Link:https://leetcode.com/problems/path-with-maximum-probability/
//Solition Link: https://leetcode.com/submissions/detail/489083867/

//To watch out for: When declaring a 2d vector, if you are going to push elements are random indexes, the 2d vector has to be initialized with empty vectors first. (by passing size as parameter during declaration - line 13 in this code).

#include<bits/stdc++.h>
using namespace std;

double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
//Code from : https://github.com/richidubey/AwesomeDataStructuresAndAlgorithms
        priority_queue< pair<double,int> > pq;
        vector< vector< pair<int,double> > > edge(n);
        
        cout<<"Hi"<<endl;
        fflush(stdout);
        
        for(int i=0;i<edges.size();i++) {
            
            edge[edges[i][0]].push_back(make_pair(edges[i][1],succProb[i]));
            edge[edges[i][1]].push_back(make_pair(edges[i][0],succProb[i]));
        }
        
        cout<<"Hi 1"<<endl;
        fflush(stdout);
        
        for(int i=0;i<edge[start].size();i++) {
            pq.push(make_pair(edge[start][i].second,edge[start][i].first));
        }
        
        cout<<"Hi 2"<<endl;
        fflush(stdout);
        int curri;
        double currp;
        
        map<int,int> vis;
        
        vis[start]=1;
        
        cout<<"Hi 3"<<endl;
        fflush(stdout);
        while(pq.size()!=0) {
            
            curri = pq.top().second;
            currp = pq.top().first;
            vis[curri]=1;
            
            if(curri==end)
                return currp;
        
            pq.pop();
            
            for(int i=0;i<edge[curri].size();i++) {
                if( vis.find(edge[curri][i].first) == vis.end() )
                    pq.push(make_pair(currp*edge[curri][i].second,edge[curri][i].first));
            }
        }
        
        return 0;
}

int main() {

	int n=3;

	vector<vector<int>> edges {{0,1},{1,2},{0,2}};
	vector<double> succProb {0.5,0.5,0.2};

	int start=0;
	int end=2;
	
	cout<<"Result is "<<maxProbability(n, edges, succProb, start, end);
	
	return 0;
}

// If you're sharing this code to others, please star our repo and do not modify/delete the github repo link in the comment. Thanks!
