#include <iostream>
using namespace std;

int main() {
	int t, n, result;
	cin>>t;
	while(t--) {
	    cin>>n;
	    result = 0;
	    while(n) {
	        result += n % 2;
	        n = n>>1;
	    }
	    cout<<result<<endl;
	}
	return 0;
}
