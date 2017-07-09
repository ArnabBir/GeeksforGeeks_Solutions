#include <iostream>
#include <utility>
#include <algorithm>
#include <cstring>
#include <climits>

using namespace std;

int  mat[51][51], dp[51][51];
bool visited[51][51];
int N;

int minCost(int i, int j){
    if(i < 0 || j < 0)  return INT_MAX;
    if(i >= N || j >= N)    return INT_MAX;
    if(i == 0 && j == 0)  return dp[i][j];
    return min(minCost(i-1, j), minCost(i, j-1)) + mat[i][j];
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    cin>>N;
	    memset(mat, 0, sizeof mat);
	    memset(dp, 0, sizeof dp);
	    memset(visited, false, sizeof visited);
	    for(int i = 0; i < N; ++i){
	        for(int j = 0; j < N; ++j){
	            cin>>mat[i][j];
	        }
	    }
	    dp[0][0] = mat[0][0];
	    visited[0][0] = true;
	    cout<<minCost( N-1, N-1)<<endl;
	    
	}
	return 0;
}
