#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(vector<vector<int> > &obstacleGrid,int m,int n) {
    vector<vector<int> > dp(m+1,vector<int>(n+1,0));
	dp[0][1] = 1;
    for(int i = 1 ; i <= m ; ++i)
        for(int j = 1 ; j <= n ; ++j)
            if(!obstacleGrid[i-1][j-1])
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
    cout<<dp[m][n];
    }

int main(){
	
		int m,n;
		cin>>m>>n;
		vector<vector<int> > obstacleGrid;
		for(int i=0;i<m;i++){
			vector<int>temp;
			for(int j=0;j<n;j++){
				int val;
				cin>>val;
				temp.push_back(val);
		}
		obstacleGrid.push_back(temp);
		}
	helper(obstacleGrid,m,n);
	
}
