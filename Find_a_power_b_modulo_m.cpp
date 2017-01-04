#include <iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

unsigned long long int modulo(string a, int m){
    unsigned long long int result = 0;
	    for(string::iterator it = a.begin(); it != a.end(); ++it){
	        result = result*10 + (*it - '0');
	        result %= m;
	    }
	    return result;
}

unsigned long long int  c_power_b(unsigned long long int c, unsigned int b, unsigned int m){
    unsigned long long int result;
    if(b == 0) return 1;
    if(b == 1) return c;
    if(b % 2 == 0){
        result = pow(c_power_b(c, b/2, m) % m, 2);
        return result % m ;
    }
    else{
        result =  (pow((c_power_b(c, b/2 - 1, m) % m )% m, 2) * (c % m)) ;
        return result % m;
    }
}

int main() {
	int T;
	cin>>T;
	string a;
	unsigned int b,m;
	while(T--){
	    cin>>a>>b>>m;
	    unsigned long long int c =  modulo( a, m) % m;
	    cout<<c_power_b(c, b, m)<<endl;
	}
	return 0;
}
