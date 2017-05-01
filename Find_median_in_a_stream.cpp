#include <iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin>>N;
	vector<int> v(N);
	for(int i = 0; i < N; ++i){
	    cin>>v[i];
	    
	    if(i)
	    for(int j = i-1; j >= 0; --j){
	        if(v[j+1] < v[j]){
	            int temp = v[j];
	            v[j] = v[j+1];
	            v[j+1] = temp;
	        }
	    }

 	    if((i+1) % 2){
	        cout<<v[(i+1)/2]<<endl;
	    }
	    else{
	        cout<<(v[(i+1)/2] + v[(i+1)/2 - 1]) / 2<<endl; 
	    }
	}
	return 0;
}
