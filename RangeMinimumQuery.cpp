// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int *constructST(int arr[],int n);


int RMQ(int st[] , int n, int a, int b);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        int Q;
        cin>>Q;



        int *segTree = constructST(A,N);

        for(int i=0;i<Q;i++)
        {
            int start,e;
            
            cin>>start>>e;
            if(start>e)
            {
                swap(start,e);
            }
            cout<<RMQ(segTree,N,start,e)<<" ";
        }
        cout<<endl;
    }
}
// } Driver Code Ends
/* The functions which 
builds the segment tree */

int constructSTUtil(int arr[], int l, int r, int * st, int n) {
    
    if(l ==r) {
        st[n] = arr[l];
        return arr[l];
    }
    int m = l + (r-l)/2;
    st[n] = min(constructSTUtil(arr, l, m, st, 2*n+1),
                constructSTUtil(arr, m+1, r, st, 2*n+2));
    return st[n];
}

int *constructST(int arr[],int n)
{
  int x = (int)ceil(log2(n));
  int max_size = 2*(int)pow(2,x) - 1;
  int *st = new int[max_size];
  constructSTUtil(arr, 0, n-1, st, 0);
  return st;
}


/* The functions returns the
 min element in the range
 from a and b */

int RMQUtil(int st[], int l, int h, int a, int b, int n) {
    if(a <= l && b >= h) {
        return st[n];
    }
    if(a > h || b < l)  return INT_MAX;
    int m = l + (h-l) / 2;
    return min(RMQUtil(st, l, m, a, b, 2*n+1), RMQUtil(st, m+1, h, a, b, 2*n+2));
}
 
int RMQ(int st[], int n, int a, int b) {
    if(a < 0 || b >= n || a > b) return -1;
    return RMQUtil(st, 0, n-1, a, b, 0);
}
