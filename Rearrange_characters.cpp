#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	int T, maxCount;
	string s;
	cin>>T;
	while(T--){
	    cin>>s;
	    unordered_map<char, int> um;
	    for(int i = 0; i < s.length(); ++i){
	        if(um.find(s[i]) != um.end())   ++um[s[i]];
	        else um[s[i]] = 1;
	    }
	    maxCount = 0;
	    for(auto & itr : um){
	        if(itr.second > maxCount)   maxCount = itr.second;
	    }
	    if(maxCount > s.length() / 2)   cout<<0<<endl;
	    else    cout<<1<<endl;
	}
	return 0;
}
