#include <iostream>
#include<string>
#define ull unsigned long long int
using namespace std;

bool isPowerofTwo(ull N){
    if(N == 0) return false;
    return N & (N - 1);
}

int main() {
	int T;
	ull N;
	cin>>T;
	while(T--){
	    cin>>N;
	    cout<<(isPowerofTwo(N) ? "NO" : "YES")<<endl;
	}
	return 0;
}
