#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> fib;

int main() {
	int T, N;
	cin>>T;
	fib.push_back(0);
	fib.push_back(1);
	int sum = 0, itr = 2;
	while(sum <= 1000){
	    fib.push_back(fib[itr - 1] + fib[itr - 2]);
	    sum = fib[itr++];
	}
	while(T--){
	    cin>>N;
	    int A[N];
	    for(int i = 0; i < N; ++i){
	        cin>>A[i];
	        if(find(fib.begin(), fib.end(), A[i]) != fib.end()){
	            cout<<A[i]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
