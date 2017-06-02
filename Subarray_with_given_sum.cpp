#include <iostream>
#include <vector>
using namespace std;

pair <int, int> findSum(int *  A, int N, int S, pair <int, int> index){
    int sum = 0;
    while(index.first < N){
        //cout<<sum<<endl;
        if(sum == S){
            return index;
        }    
        if(sum < S){
            sum += A[index.second];
            ++index.second;
        }
        else if(sum > S){
            sum -= A[index.first++];
        }
    }
    pair<int, int>  defaultIndex;
    defaultIndex.first = -1;
    defaultIndex.second = -1;
    return defaultIndex;
}

int main() {
	int T, N, S;
	pair <int, int> index;
	cin>>T;
	while(T--){
	    cin>>N>>S;
	    int A[N];
	    index.first = index.second = 0;
	    for(int i = 0 ; i < N; ++i){
	        cin>>A[i];
	    }
	    pair <int, int> result = findSum(A, N, S, index);
	    if(result.first == -1){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<(result.first + 1)<<" "<<(result.second)<<endl;
	    }
	}
	return 0;
}
