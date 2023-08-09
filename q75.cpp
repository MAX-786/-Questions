#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int l = 0, m = 0, h = n - 1;   

    while ( m <= h ) {
        if ( nums[m] == 1) {
            m++;
        }
        else if ( nums[m] == 0) {
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else {
            swap(nums[m],nums[h]);
            h--;
        }
    }

    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}