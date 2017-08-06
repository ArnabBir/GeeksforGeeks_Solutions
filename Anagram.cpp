#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool isAnagram(string s1, string s2){
    if(s1.length() != s2.length())  return false;
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
	int T;
	string s1, s2;
	cin>>T;
	while(T--){
	    cin>>s1>>s2;
	    cout<<(isAnagram(s1, s2) ? "YES" : "NO")<<endl;
	}
	return 0;
}
