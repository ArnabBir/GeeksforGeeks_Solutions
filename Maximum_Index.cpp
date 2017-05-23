#include <iostream>
using namespace std;

int main() {
	int T, N, maxdiff;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N];
	    for(int i = 0; i < N; ++i){
	        cin>>A[i];
	    }
	    maxdiff = 0;
	    for(int i = 1; i < N; ++i){
	        for(int j = 0; j < i; ++j){
	            if(i - j > maxdiff){
	                if(A[j] <= A[i]){
	                    maxdiff = i - j;
	                }
	            }
	        }
	    }
	    cout<<maxdiff<<endl;
	}
	return 0;
}
