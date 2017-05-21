#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int T, n, m, x, temp;
	cin>>T;
	while(T--){
	    bool first = true;
	    unordered_map<int, int> um;
	    cin>>n>>m>>x;
	    int a[n];
	    for(int i = 0; i < n; ++i){
	        cin>>a[i];
	    }
	    for(int j = 0; j < m; ++j){
	        cin>>temp;
	        um[x -temp] = temp;
	    }
	    for(int i = 0; i < n; ++i){
	        unordered_map<int, int>::const_iterator itr = um.find (a[i]);
	        if(itr != um.end()){
	            if(first){
	                first = false;
	                cout<<a[i]<<" "<<x-a[i];
	            }
	            else{
	                cout<<", "<<a[i]<<" "<<x-a[i];
	            }
	        }
	    }
	    if(first)   cout<<-1;
	    cout<<endl;
	}
	
	return 0;
}
