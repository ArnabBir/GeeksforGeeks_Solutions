#include <iostream>
#include<climits>
using namespace std;

int maxSubarray(int * A, int n){
    int sum_max= INT_MIN, sum_curr = 0;
    for(int i = 0; i < n; ++i){
        sum_curr += A[i];
        if(sum_max < sum_curr) sum_max = sum_curr;
        sum_curr = max(sum_curr, 0);
    }
    return sum_max;
}

int main() {
	int T, N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N];
	    for(int i = 0; i < N; ++i){
	        cin>>A[i];
	    }
	    cout<<maxSubarray(A, N)<<endl;
	}
	return 0;
}
