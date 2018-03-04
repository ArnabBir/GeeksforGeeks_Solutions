// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T, N, count, temp, min1, min2;
	
	cin>>T;

	while(T--){
	    
	    cin>>N;
	    if(N == 0 || N == 1){
	        cout<<0<<endl;
	        continue;
	    }
	    
	    priority_queue<int, vector<int>, greater<int>> pq;
	    
	    for(int i = 0; i < N; ++i){
	        cin>>temp;
	        pq.push(temp);
	    }
	    
	    count = 0;
	    
	    while(pq.size() > 1){
	        min1 = pq.top();
	        pq.pop();
	        min2 = pq.top();
	        pq.pop();
	        count += (min1 + min2);
	        pq.push(min1+min2);
	    }
	    
	    cout<<count<<endl;
	}
	
	return 0;
}
