#include <iostream>
#include<cstring>
using namespace std;


int main() {
	int T, r, c;
	cin>>T;
    while(T--){
        cin>>r>>c;
        int mat[r][c], mat_[r][c];
        for(int i = 0; i < r; ++i){
            for(int j = 0; j < c; ++j){
                cin>>mat[i][j];
                mat_[i][j] = mat[i][j];
            }
        }
        bool row[r], col[c];
        memset(row, false, sizeof row);
        memset(col, false, sizeof col);
        for(int i = 0; i < r; ++i){
            if(row[i] == true)  continue;
            for(int j = 0; j < c; ++j){
                if(col[j] == true)  continue;
                if(mat[i][j] == 1){
                    for(int p = 0; p < r; ++p){
                        mat_[p][j] = 1;
                    }
                    for(int q = 0; q < c; ++q){
                        mat_[i][q] = 1;
                    }
                    row[i] = col[j] = true;
                }
            }
        }
        for(int i = 0; i < r; ++i){
            for(int j = 0; j < c; ++j){
                cout<<mat_[i][j]<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}
