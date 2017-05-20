#include <iostream>
#include<algorithm>
using namespace std;

int dp[1000] = {0};

void getShortestPath(int n){
        for(int j = 2; j <= n; ++j){
            if( j % 3 == 0)
                dp[j] = min(dp[j-1] + 1, dp[j/3] + 1);
            else    dp[j] = dp[j-1] + 1;
        }
}

int main() {
	int T, n;
	cin>>T;
	while(T--){
	    cin>>n;
	    //cout<<"Hello"<<endl;
	    if(n == 1){
	        cout<<0<<endl;
	        continue;
	    }
	    dp[0] = dp[1] = 0;
	    //cout<<"Hello"<<endl;
	    if(dp[n] == 0)
	        getShortestPath(n);
	    cout<<dp[n]<<endl;
	}
	return 0;
}
