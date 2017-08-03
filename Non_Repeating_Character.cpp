#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	int T, N;
	bool flag;
	cin>>T;
	while(T--){
	    cin>>N;
	    char A[N];
	    unordered_map<char, int> um;
	    for(int i = 0; i < N; ++i){
	        cin>>A[i];
	        if(um.find(A[i]) != um.end()){
	            ++um[A[i]];
	        }
	        else um[A[i]] = 1;
	    }
	    flag = false;
	    for(int i = 0; i < N; ++i){
	        if(um[A[i]] == 1){
	            cout<<A[i]<<endl;
	            flag = true;
	            break;
	        }
	    }
	    if(!flag)   cout<<-1<<endl;
	}
	return 0;
}
