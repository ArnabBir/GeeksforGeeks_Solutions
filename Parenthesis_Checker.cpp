#include <iostream>
#include <string>
#include <stack>

char getClosingBracket(char c){
    
    if(c == '(')    return ')';
    if(c == '{')    return '}';
    if(c == '[')    return ']';
    return c;
}

using namespace std;

int main() {
	int T;
	string s;
	cin>>T;
	while(T--){
	    cin>>s;
	    stack<char> charStack;
	    for(int i = 0; i < s.length(); ++i){
	        //if(i > 0)   cout<<getClosingBracket(s[i])<<charStack.top()<<endl;
	        if(charStack.empty()){
	            charStack.push(s[i]);
	        }
	        else if(getClosingBracket(charStack.top()) == s[i]){
	            charStack.pop();
	        }
	        else{
	            charStack.push(s[i]);
	        }
	    }
	    if(charStack.empty())   cout<<"balanced"<<endl;
	    else   cout<<"not balanced"<<endl;
	}
	return 0;
}
