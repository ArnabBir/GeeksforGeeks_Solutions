#include <iostream>
#include<climits>
using namespace std;


int countTrails(int n, int k)
{
    if (k <= 1) return k;
 
    if (n == 1) return k;
 
    int minTrials = INT_MAX, trials;

    for (int x = 1; x <= k; ++x)
    {
        trials = max(countTrails(n-1, x-1), countTrails(n, k-x));
        if(trials < minTrials)  minTrials = trials;
    }
 
    return minTrials + 1;
}


int main() {
	int T, n, k;
	cin>>T;
	while(T--){
	    cin>>n>>k;
	    cout<<eggDrop(n, k)<<endl;
	}
	return 0;
}
