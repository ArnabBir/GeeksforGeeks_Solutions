#include <bits/stdc++.h>
using namespace std;

int getMergeInversions(int * A, int low1, int high1, int low2, int high2){
    
    int leftArray[high1 - low1];
    int rightArray[high2 - low2];
    for(int i = low1; i <= high1; ++i)  leftArray[i - low1] = A[i];
    for(int i = low2; i <= high2; ++i)  rightArray[i - low2] = A[i];
    int count = 0, itr = low1, i1 = 0, i2 = 0;
    while(low1 + i1 <=  high1 && low2 + i2 <=  high2){
        if(leftArray[i1] <= rightArray[i2]){
            A[itr++] = leftArray[i1++];
        }
        else{
            count += low2 - (low1 + i1);
            A[itr++] = rightArray[i2++];
        }
    }
    while(i1 <= (high1-low1)){
        A[itr++] = leftArray[i1++];
    }
    while(i2 <= (high2-low2)){
        A[itr++] = rightArray[i2++];
    }
    return count;
    
}

int getInversionCount(int * A, int low, int high){
    
    if(low < high){
        int mid = low + (high - low) / 2;
        return getInversionCount(A, low, mid) + getInversionCount(A, mid+1, high) + getMergeInversions(A, low, mid, mid+1, high); 
    }
    return 0;
}

int main() {
	
	int T, N, C;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N];
	    for(int i = 0; i < N; ++i)  cin>>A[i];
	    cout<<getInversionCount(A, 0, N-1)<<endl;
	}
	return 0;
}
