#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(vector<vector<int>> &matrix){
    int n = matrix.size();
    int i = 0;
    int j = 0;
    while ( i < n - 1 && j < n - 1 ) {
        for (int k = i + 1; k < n; k++)
        {
            swap(matrix[k][j], matrix[i][k]);
        }
        i++;
        j++;
    }
    i = 0; j = 0;

    while ( i < n/2 ){
        j=0;
        while ( j < n ){ 
            swap(matrix[j][i],matrix[j][n - 1 - i]);
            j++;
        }
        i++;
    }
    return;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    return 0;
}