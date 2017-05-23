/*You are required to complete below method */

void countDistinct(int A[], int k, int n)
{
    int count;
    for(int i = 0; i <= n-k; ++i){
        int countA[101] = {0};
        count = 0;
        for(int j = i; j < i + k; ++j){
            ++ countA[A[j]];
            if(countA[A[j]] == 1)   ++count;
            if(countA[A[j]] > 1);
        }
        cout<<count<<" ";
    }
}
