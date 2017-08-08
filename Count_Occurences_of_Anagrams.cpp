#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    int charCount[26];
    memset(charCount, 0, sizeof charCount);
    for(int i = 0; i < s1.length(); ++i){
        ++charCount[s1[i] - 'a'];
        --charCount[s2[i] - 'a'];
    }
    for(int i = 0; i < 26; ++i){
        if(charCount[i] != 0)   return false;
    }
    return true;
}

int main() {
	int T, len, count;
	string s1, s2;
	cin>>T;
	while(T--){
	    cin>>s1>>s2;
	    count = 0;
	    if(s1.length() < s2.length()){
	        cout<<0<<endl;
	        continue;
	    }
	    for(int i = 0; i <= s1.length() - s2.length(); ++i){
	        if(isAnagram(s1.substr(i, s2.length()), s2)){
	            ++count;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
