#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int maxProfit(vector<int> &a)
{
    int mini = a[0];
    int profit = 0;
    for (int i = 1; i < a.size(); i++)
    {
        int cost = a[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, a[i]);
    }
    return profit;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}