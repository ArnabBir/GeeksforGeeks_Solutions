#include <iostream>
using namespace std;

bool hBinSearch(int l, int N, int M, int ** a, int x){
    if(l <= N){
        if(a[(l+N)/2][M] == x)  return true;
        if(a[(l+N)/2][M] > x)   return hBinSearch(l, (l+N)/2-1, M, a, x);
        if(a[(l+N)/2][M] < x)   return hBinSearch((l+N)/2+1, N, M, a, x);
    }
    return false;
}

bool vBinSearch(int r, int M, int N, int ** a, int x){
    if(r <= M){
        if(a[N][(r+M)/2] == x)  return true;
        if(a[N][(r+M)/2] > x)   return vBinSearch(r, (r+M)/2-1, N, a, x);
        if(a[N][(r+M)/2] < x)   return vBinSearch((r+M)/2+1, M, N, a, x);
    }
    return false;
}

int mSearch(int l, int r, int N, int M, int **a, int x){
    //cout<<"HEllo"<<endl;
    if(l > N || r > M)    return 0;
    if(a[(l+N)/2][(r+M)/2] == x)    return 1;
    if(a[(l+N)/2][(r+M)/2] > x){
        if(hBinSearch( l, (l+N)/2-1, (r+M)/2, a, x) || vBinSearch( r, (r+M)/2-1, (l+N)/2, a, x)){
            return 1;
        }
        return mSearch(l, r, (l+N)/2-1, (r+M)/2-1, a, x);
    }     
    if(a[(l+N)/2][(r+M)/2] < x){
        if(hBinSearch( (l+N)/2+1, N, (r+M)/2, a, x) || vBinSearch( (r+M)/2+1, M, (l+N)/2, a, x)){
            return 1;
        }
        return mSearch((l+N)/2+1, (r+M)/2+1, N, M, a, x);
    }     
    return 0;
}

int main() {
	int T, N, M, x;
	cin>>T;
	while(T--){
	    cin>>N>>M;
	    int *a[N];
	    for(int i = 0; i < N; ++i){
	        a[i] = new int[M];
	        for(int j = 0; j < M; ++j){
	            cin>>a[i][j];
	        }
	    }
	    cin>>x;
	    int flag = 0;
	    cout<<mSearch(0, 0, N, M, a, x)<<endl;
	}
	return 0;
}
