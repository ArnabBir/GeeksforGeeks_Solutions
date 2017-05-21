#include <iostream>
using namespace std;
int main() {
	int T, n, count;
	cin>>T;
	while(T--){
	    cin>>n;
	    char bs[n+1];
	    cin>>bs;
	    count = 0;
	    for(int i = 0; i < n; ++i){
	        if(bs[i] == '1'){
	            ++count;
	        }
	    }
	    cout<<(count * (count -1)) / 2<<endl;
	}
	return 0;
}
