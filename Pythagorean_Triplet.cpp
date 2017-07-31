#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int T, N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N];
	    for(int i = 0; i < N; ++i)  cin>>A[i];
	    bool flag = false;
	    for(int i = 0; i < N; ++i){
	        for(int j = 0; j < N; ++j){
	            for(int k = 0; k < N; ++k){
	                if(A[i]*A[i] + A[j]*A[j] == A[k]*A[k]){
	                    flag = true;
	                    break;
	                }
	            }
	            if(flag)    break;
	        }
	        if(flag)    break;
	    }
	    if(flag)    cout<<"Yes"<<endl;
	    else    cout<<"No"<<endl;
	}
	return 0;
}
