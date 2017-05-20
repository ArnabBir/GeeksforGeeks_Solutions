#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {
	int T, K, i, j;
	cin>>T;
	while(T--){
	    cin>>K>>i>>j;
	    bool isRemaining = false;
	    if(K == 0){
	        cout<<setprecision(6)<<0<<endl;
	    }
	    else{
            int k = 0;
            while(K - pow(2,k) >= 0){
                K -= pow(2,k++);
            }
            if(i <= k){
                cout<<setprecision(6)<<1<<endl;

            }
            else if(i == k+1){
                if(j == 1 || j == pow(2,k))
                    cout<<setprecision(6)<<(double)K / pow(2,k)<<endl;
                else{
                    cout<<1<<endl;
                    //isRemaining = true;
                }
            }
           
                else    cout<<setprecision(6)<<0<<endl;
            }
	    }
	return 0;
}
