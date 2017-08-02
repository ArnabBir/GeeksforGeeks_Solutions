#include <iostream>
using namespace std;

int main() {
	int T, N, maxHeight, count;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N];
	    for(int i = 0; i < N; ++i)  cin>>A[i];
	    maxHeight = 0;
	    count = 0;
	    for(int i = 0; i < N; ++i){
	        if(A[i] >= maxHeight){
	            ++count;
	            maxHeight = A[i];
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
