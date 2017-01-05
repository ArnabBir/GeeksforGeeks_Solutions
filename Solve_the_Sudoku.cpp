#include <iostream>
#include<utility>
#include<vector>
using namespace std;
#define dim 9

int mat[dim][dim];
vector<pair<int, int>> isEmpty;

void fillCell(int index){
    bool flag;
    bool edit = false;
    int n;
    for(n = 1; n <= dim; ++n){
        flag = false;
        for(int i = 0; i < dim; ++i){
            if(i == isEmpty[index].second) continue;
            if(mat[isEmpty[index].first][i] == n){
                flag = true;
                break;
            }
        }
        if(flag) continue;
        for(int j = 0; j < dim; ++j){
            if(j == isEmpty[index].first) continue;
            if(mat[j][isEmpty[index].second] == n){
                flag = true;
                break;
            }
        }
        
        if(flag) continue;
        for(int j = isEmpty[index].first / 3; j < dim; ++j){
            if(j == isEmpty[index].first) continue;
            if(mat[j][isEmpty[index].second] == n){
                flag = true;
                break;
            }
        }
        
        if(!flag){
            mat[isEmpty[index].first][isEmpty[index].second] = n;
            edit = true;
            fillCell(index+1);
        }
    }
    if(!edit){
        return;
    }
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    for(int i = 0; i < dim; ++i){
	        for(int j = 0; j < dim; ++j){
	            cin>>mat[i][j];
	            if(!mat[i][j])  isEmpty.push_back(make_pair(i, j));
	        }
	    }
	    fillCell(0);
	    for(int i = 0; i < dim; ++i){
	        for(int j = 0; j < dim; ++j){
	            cout<<mat[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
