#include <iostream>
using namespace std;

unsigned long long int sum[100][100][100] = {0};
unsigned long long int result[100][100][100] = {0};
unsigned long long int count[100][100][100] = {0};

void initialVarDefine(){
    
	    result[0][0][0] = 0;
	    result[1][0][0] = 4;
	    result[0][1][0] = 5;
	    result[0][0][1] = 6;

	    sum[0][0][0] = 0;
	    sum[1][0][0] = 4;
	    sum[0][1][0] = 5;
	    sum[0][0][1] = 6;
	    
	    sum[1][1][0] = 45 + 54;
	    sum[0][1][1] = 56 + 65;
	    sum[1][0][1] = 46 + 64;
	    
	    result[1][1][0] = sum[1][1][0] + sum[1][0][0] + sum[0][1][0];
	    result[0][1][1] = sum[0][1][1] + sum[0][1][0] + sum[0][0][1];
	    result[1][0][1] = sum[1][0][1] + sum[1][0][0] + sum[0][0][1];
	    
	    //if(x == 0)
	    
	    /*result += sum[0][0][0] 
	            + sum[1][0][0]
	            + sum[0][1][0]
	            + sum[0][0][1]
	            + sum[1][1][0]
	            + sum[0][1][1]
	            + sum[1][0][1] = 46 + 64;
	    */
	    
	    count[0][0][0] = 0;
	    count[1][0][0] = 1;
	    count[0][1][0] = 1;
	    count[0][0][1] = 1;
	    count[1][1][0] = 2;
	    count[0][1][1] = 2;
	    count[1][0][1] = 2;
}

unsigned long long int get_count(int x, int y, int z){
    if(count[x][y][z] == 0 && x * y * z){
        count[x][y][z] = 1;
        for(int i = 1; i <= x + y + z; ++i){
            count[x][y][z] *= i;
        }
        for(int i = 1; i <= x; ++i){
            count[x][y][z] /= i;
        }
        for(int i = 1; i <= y; ++i){
            count[x][y][z] /= i;
        }
        for(int i = 1; i <= z; ++i){
            count[x][y][z] /= i;
        }
    }
    //cout<<count[x][y][z]<<endl;
    return count[x][y][z];
        
}

unsigned long long int get_sum(int i, int j, int k){
    
	                if(sum[i][j][k] == 0 && i * j * k)
	                    sum[i][j][k] = (
	                                    (10 * get_sum(i-1, j, k) + 4 * get_count(i-1, j, k)) % 1000000007
	                                  + (10 * get_sum(i, j-1, k) + 5 * get_count(i, j-1, k)) % 1000000007
	                                  + (10 * get_sum(i, j, k-1) + 6 * get_count(i, j, k-1)) % 1000000007
	                             )
	                             % 1000000007;
	    
	    cout<<sum[i][j][k]<<endl;
	    return sum[i][j][k];
}


unsigned long long int get_result(int x, int y, int z){
    if(result[x][y][z] == 0 && x*y*z){
	     result[x][y][z] = get_result(x-1, y, z)
	                     + get_result(x, y-1, z)
	                     + get_result(x, y, z-1)
	                     + get_sum(x, y, z)
	                     - get_result(x-1, y-1, z)
	                     - get_result(x, y-1, z-1)
	                     - get_result(x-1, y, z-1);
	}
	return result[x][y][z];
}



int main() {
    int T, x, y, z;
    cin>>T;
	while(T--){
	    cin>>x>>y>>z;
        initialVarDefine();
	    cout<<get_result(x, y, z)<<endl;
	}
	return 0;
}
