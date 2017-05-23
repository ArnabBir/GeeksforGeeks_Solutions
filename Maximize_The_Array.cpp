#include <iostream>
using namespace std;



int main() {
	int T, N;
	cin>>T;
	while(T--){
	    cin>>N;
	    bool isA1[11] = {false};
	    bool isA2[11] = {false};
	    int A1[N], A2[N];
	    for(int i = 0 ; i < N; ++i){
	        cin>>A1[i];
	        isA1[A1[i]] = true;
	    }
	    for(int i = 0 ; i < N; ++i){
	        cin>>A2[i];
	        isA2[A2[i]] = true;
	    }
	    int size = N;
	    for(int i = 9; i >= 0; --i){
	        if(size){
    	        if(isA2[i]){
    	            if(isA1[i]) isA1[i] = false;
    	            --size;
    	        }
    	        else if(isA1[i]){
    	            --size;
    	        }
	        }
	        else{
	            isA2[i] = isA1[i] = false;
	        }
	    }
	    for(int i = 0; i < N; ++i){
	        if(isA2[A2[i]]){
	            cout<<A2[i]<<" ";
	            isA2[A2[i]] = false;
	        } 
	    }
	    for(int i = 0; i < N; ++i){
	        if(isA1[A1[i]]){
	            cout<<A1[i]<<" ";
	            isA1[A1[i]] = false;
	        } 
	    }
	    cout<<endl;
	}
	return 0;
}
