#include <iostream>
#include<string>
#include<vector>
#include <sstream>

using namespace std;

vector<string> split(string s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

int main() {
	int T, prev, next;
	cin>>T;
	string str;
	while(T--){
	    cin>>str;
	    vector<string> revstr = split(str, '.');
        for(int i = revstr.size() - 1; i >= 0; --i){
            cout<<revstr[i];
            if(i != 0) cout<<".";
        }
        cout<<endl;
	    
	}
	return 0;
}
