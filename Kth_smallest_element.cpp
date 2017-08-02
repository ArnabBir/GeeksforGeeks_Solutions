#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int T, N, K, inp;
	cin>>T;
	while(T--){
	    cin>>N;
	    priority_queue<int, vector<int>, greater<int>> pq;
	    for(int i = 0; i < N; ++i){
	        cin>>inp;
	        pq.push(inp);
	    }
	    cin>>K;
	    while(K-- > 1){
	        pq.pop();
	    }
	    cout<<pq.top()<<endl;
	}
	return 0;
}
