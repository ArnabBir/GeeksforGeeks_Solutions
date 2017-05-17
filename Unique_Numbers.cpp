#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int T, m, n;
	cin>>T;
	while(T--){
	    cin>>m>>n;
	    for(int i = m; i <= 9; ++i){
	        cout<<i<<" ";
	    }
	    if(m < 10)
	    for(int i = 10; i <= n && i < 100; ++i){
	        if(i/10 != i%10)
	            cout<<i<<" ";
	    }
	    else{
	        for(int i = m; i <= n && i < 100; ++i){
	        if(i/10 != i%10)
	            cout<<i<<" ";
	        }
	    }
	    
	    if(m < 100)
	    for(int i = 101; i<= n && i < 1000; ++i){
	        if((i/100 == (i%100)/10)  || ((i%100)/10 == (i%100)%10) || (i/100 == (i%100)%10))    continue;
	        else    cout<<i<<" ";
	    }
	    else{
	        for(int i = m; i<= n && i < 1000; ++i){
	        if((i/100 == (i%100)/10)  || ((i%100)/10 == (i%100)%10) || (i/100 == (i%100)%10))    continue;
	        else    cout<<i<<" ";
	        }
	    }
	   cout<<endl;
	}
	return 0;
}
