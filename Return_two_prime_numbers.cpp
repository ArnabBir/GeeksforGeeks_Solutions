#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T, N;
	cin>>T;
	while(T--){
        cin>>N;
        vector<bool> isPrime(N + 1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        
        for(int i = 2; i <= N; i++) {
            if (!isPrime[i]) continue;
            if (i > N / i) break;
            for (int j = i * i; j <= N; j += i) isPrime[j] = false;
        }
        for(int i = 2; i <= N; ++i) {
            if(isPrime[i] && isPrime[N - i]) {
                vector<int> ans;
                ans.push_back(i);
                ans.push_back(N - i);
                cout<<ans[0]<<" "<<ans[1]<<endl;
                break;
            }
        } 
	}
	return 0;
}
