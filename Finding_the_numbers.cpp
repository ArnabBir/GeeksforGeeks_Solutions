#include <iostream>
#include<map>
#include<algorithm>
#define ui unsigned int
using namespace std;

int main() {
	int T, N;
	ui n;
	cin>>T;
	while(T--){
	    cin>>N;
	    map<ui, int> A;
	    for(int i = 0; i < 2*N + 2; ++i){
	        cin>>n;
	        if(A.find(n) != A.end()){
	            A[n] = 2;
	        }
	        else A[n] = 1;
	    }
	    for (map<ui, int>::iterator it = A.begin(); it != A.end(); ++it ){
            if (it->second == 1)    cout<<it->first<< " ";
	    }
	    cout<<endl;
	}
	return 0;
}
