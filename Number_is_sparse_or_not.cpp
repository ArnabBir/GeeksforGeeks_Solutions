#include <iostream>
using namespace std;

int isSparse(int inp){
    int flag = 1, prevBit = -1, currBit;
    while(inp){
        currBit = inp%2;
        //cout<<currBit<<" "<<prevBit<<endl;
        if(currBit == 1 && prevBit == 1){
            flag = 0;
            break;
        }
        inp /= 2;
        prevBit = currBit;
    }
    return flag;
}

int main() {
	int T, inp;
	cin>>T;
	while(T--){
	    cin>>inp;
	    cout<<isSparse(inp)<<endl;
	}
	return 0;
}
