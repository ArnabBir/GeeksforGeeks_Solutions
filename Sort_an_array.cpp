#include <iostream>
using namespace std;

int main() {
	int T, N, pt1, pt2, curr;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N];
	    for(int i = 0; i < N; ++i)  cin>>A[i];
	    pt1 = 0;
	    pt2 = N-1;
	    curr = 0;
	    if(N == 1)  cout<<A[N-1]<<endl;
	    else{
	        while(curr <= pt2){
	            switch(A[curr]){
	                case 0:
	                    swap(A[pt1++], A[curr++]);
	                    break;
	                case 1:
	                    ++curr;
	                    break;
	                case 2:
	                    swap(A[curr], A[pt2--]);
	            }
	        }
	        for(int i = 0; i < N; ++i){
	            cout<<A[i]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
