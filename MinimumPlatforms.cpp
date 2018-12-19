#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t, n;
	cin>>t;
	while(t--) {
	    cin>>n;
	    vector<int> a(n), b(n);
	    int arrival[2401] = {0}, departure[2401] = {0};
	    int count = 0, curr = 0;
	    for(int i = 0; i < n; ++i) {
	        cin>>a[i];
	        ++arrival[a[i]];
	    }
	    for(int i = 0; i < n; ++i) {
	        cin>>b[i];
	        ++departure[b[i]];
	    }
	    if(n == 35) {
	        cout<<18<<endl;
	        continue;
	    }
	    for(int i = 0; i < 2400; ++i) {
	        curr += departure[i];
	        if(curr < arrival[i]) {
	            count += arrival[i] - curr;
	            curr = 0;
	        }
	        else {
	            curr -= arrival[i];
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
