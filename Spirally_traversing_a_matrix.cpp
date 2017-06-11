#include <iostream>

using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N = 4;
	    int A[N][N];
	    for(int i = 0; i < N; ++i){
	        for(int j = 0; j  < N; ++j){
	            cin>>A[i][j];
	        }
	    }
	    int l = 0, w = 0;
	    while(l < N && w < N){
	        for(int i = l; i < N; ++i){
	            cout<<A[w][i]<<" ";
	        }
	        ++w;
	        for(int j = w; j < N; ++j){
	            cout<<A[j][N-1]<<" ";
	        }
	        for(int i = N-2; i >= l; --i){
	            cout<<A[N-1][i]<<" ";
	        }
	        for(int j = N-2; j >= w; --j){
	            cout<<A[j][l]<<" ";
	        }
	        ++l;
	        --N;
	    }
	    cout<<endl;
	}
	return 0;
}
