#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<vector<int>> solve(int n){
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i) 
                row.push_back(1);
            else{
                row.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }

        }
        ans.push_back(row);
        row = {};
    }
    
    return ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}