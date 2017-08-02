#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int T, N;
	char inp;
	cin>>T;
	while(T--){
	    cin>>N;
	   unordered_map<char, int> um;
	    for(int i = 0; i < N; ++i){
	        cin>>inp;
	        if(um.find(inp) != um.end()){
	            ++um[inp];
	        }
	        else{
	            um[inp] = 1;
	        }
	    }
	    bool flag = false;
	    for(auto& it : um){
	        if(it.second > N/2){
	            cout<<it.first<<endl;
	            flag = true;
	            break;
	        }
	    }
	    if(!flag)   cout<<"NO Majority Element"<<endl;
	}
	return 0;
}
