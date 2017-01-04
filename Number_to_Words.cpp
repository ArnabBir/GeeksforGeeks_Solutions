#include <iostream>
#include<string>
using namespace std;

string spell(int n){
    switch(n){
        case 0:
            return "zero";
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case 3:
            return "three";
            break;
        case 4:
            return "four";
            break;
        case 5:
            return "five";
            break;
        case 6:
            return "six";
            break;
        case 7:
            return "seven";
            break;
        case 8:
            return "eight";
            break;
        case 9:
            return "nine";
            break;
    }
}

string unitPlace(char n1){
	return spell((int)n1 - 48);
}

string decimalPlace(char n2, char n1){
	string s;
	switch((int)n2 - 48){
        case 0:
            s =  "";
        case 1:
            switch((int)n1 - 48){
        	case 0:
            	return "ten";
        	case 1:
            	return "eleven";
            	break;
        	case 2:
           		return "twelve";
            	break;
        	case 3:
            	return "thirteen";
            	break;
        	case 4:
            	return "fourteen";
            	break;
        	case 5:
            	return "fifteen";
            	break;
        	case 6:
            	return "sixteen";
            	break;
        	case 7:
            	return "seventeen";
            	break;
        	case 8:
            	return "eighteen";
            	break;
        	case 9:
            	return "nineteen";
            	break;
    		}
            break;
        case 2:
            s =  "twenty";
            break;
        case 3:
            s =  "thirty";
            break;
        case 4:
            s =  "forty";
            break;
        case 5:
            s = "fifty";
            break;
        case 6:
            s = "sixty";
            break;
        case 7:
            s = "seventy";
            break;
        case 8:
            s = "eighty";
            break;
        case 9:
            s = "ninety";
            break;
    }
	if(n1 == '0');
	else{
	    s += " " + unitPlace(n1);
	}
	return s;
}

string hundredPlace(char n3, char n2, char n1){
	string s = unitPlace(n3) + " hundred";
	if(n2 == '0'){
	    if(n1 == '0');
	    else{
	        s += " and " + unitPlace(n1);
	    }
	}
	else{
	    s += " and " + decimalPlace(n2, n1);
	}
	return s;
}

string thousandPlace(char n4, char n3, char n2, char n1){
	string s = unitPlace(n4) + " thousand";
	if(n3 == '0'){
		if(n2 == '0'){
			if(n1 == '0');
			else s += " " + unitPlace(n1);
		}
		else{
			s += " " + decimalPlace(n2, n1);
		}
	}
	else{
		s += " " + hundredPlace(n3, n2, n1);
	}
	return s;
}

int main() {
	int T;
	string N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int len = N.length();
	    switch(len){
            case 1:
            	cout<<unitPlace(N[0])<<endl;
            	break;
            case 2:
            	cout<<decimalPlace(N[0], N[1])<<endl;
            	break;
            case 3:
            	cout<<hundredPlace(N[0], N[1], N[2])<<endl;
            	break;
            case 4:
            	cout<<thousandPlace(N[0], N[1], N[2], N[3])<<endl;
            	break;
	    }
	}
	return 0;
}
