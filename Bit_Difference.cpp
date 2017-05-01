#include <iostream>
using namespace std;

int sumBits(int n){
    int sum = 0;
    while(n){
        sum += n % 2;
        n /= 2;
    }
    return sum;
}

int main() {
	int T, A, B;
	cin>>T;
	while(T--){
	    cin>>A>>B;
	    int XOR = A^B;
	    cout<<sumBits(XOR)<<endl;
	}
	return 0;
}
