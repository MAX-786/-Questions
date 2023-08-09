#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void setZero(vector<vector<int>> &matrix, int row, int col){

    // set row
    for (int i = 0; i < matrix[0].size(); i++)
    {
        matrix[row][i] = 0;
    }

    // set col
    for (int i = 0; i < matrix.size(); i++)
    {
        matrix[i][col] = 0;
    }
    

}

void solve(vector<vector<int>> &matrix) {

    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> hshZeros(matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ( hshZeros[i][j] == 0 ) {
                setZero(matrix,i,j);
                continue;
            }
        }
        
    }
    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}