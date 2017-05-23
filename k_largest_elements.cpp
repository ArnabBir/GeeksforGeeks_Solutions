#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T, N, K;
	cin>>T;
	while(T--){
	    cin>>N>>K;
	    int A[N];
	    for(int i = 0; i < N; ++i){
	        cin>>A[i];
	    }
	    for(int i = 0; i < K; ++i){
	        for(int j = i+1; j < N; ++j){
	            if(A[i] < A[j]){
	                swap(A[i], A[j]);
	            }
	        }
	    }
	    for(int i = 0; i < K; ++i){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
