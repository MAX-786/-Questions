#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void nextPermutation(vector<int>& nums) {

    int n = nums.size();
    int idx = -1;
    for (int i = n - 2 ; i >= 0; i--)
    {
        if( nums[i] < nums[i + 1]) {
            idx = i;
            break;
        }
    }
    if ( idx == -1){
        for (int i = 0; i < n/2 ; i++)
        {
            swap(nums[i],nums[n - i - 1]);
        }
        return;
    }
    
    for (int i = n - 1 ; i > idx ; i--)
    {
        if ( nums[i] > nums[idx] ){
            swap(nums[i],nums[idx]);
            break;
        }
    }
    int i = 1;
    while( i <= (n - idx)/2 ){
        swap(nums[idx + i],nums[n - i]);
        i++;
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,3,2};
    nextPermutation(nums);
    for(auto i: nums){
        cout<<i<<" ";
    }

    return 0;
}