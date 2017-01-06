#include <iostream>
using namespace std;

#define ui unsigned int
#define ull unsigned long long int

ull power(ui modulo, ui B, ui C){
    if(B == 0) return 1;
    if(B == 1) return modulo;
    ull result = power(modulo, B / 2, C) % C;
    if(B % 2 == 0)  return ((result % C)* (result % C)) % C;
    else    return ((result % C) * (result % C) * modulo) % C;
}

int main() {
	ui A, B, C, modulo;
	int T;
	cin>>T;
	while(T--){
	    cin>>A>>B>>C;
	    modulo = A % C;
	    cout<<power(modulo, B, C)<<endl;
	}
	return 0;
}
