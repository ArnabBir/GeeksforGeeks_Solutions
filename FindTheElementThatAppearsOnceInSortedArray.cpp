#include <iostream>
#define ll long long int
using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--) {
	    cin>>n;
	    ll x = 0, temp;
	    for(int i = 0; i < n; ++i) {
	        cin>>temp;
	        x ^= temp;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
