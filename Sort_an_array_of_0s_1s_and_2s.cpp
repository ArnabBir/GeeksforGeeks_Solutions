#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T, N, low, mid, high;
	cin>>T;
	while(T--){
	    cin>>N;
	    int arr[N];
	    for(int i = 0; i < N; ++i)  cin>>arr[i];
	    low = 0;
	    mid = 0;
	    high = N - 1;
	    while(mid <= high){
	        if(arr[mid] == 0){
	            swap(arr[mid], arr[low]);
	            ++low;
	            ++mid;
	        }   
	        else if(arr[mid] == 1) ++mid;
	        else if(arr[mid] == 2){
	            swap(arr[mid], arr[high]);
	            --high;
	        }  
	    }
	    for(int i = 0; i < N; ++i)  cout<<arr[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
