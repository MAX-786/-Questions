#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isValid(int n, vector<string> &board, int row, int col)
{

    // left check
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 'Q')
        {
            return false;
        }
    }

    // upper diagonal check
    int trow = row, tcol = col;
    while (trow >= 0 && tcol >= 0)
    {
        if (board[trow][tcol] == 'Q')
        {
            return false;
        }
        trow--;
        tcol--;
    }

    // lower diagonal check
    trow = row;
    tcol = col;
    while (trow < n && tcol >= 0)
    {
        if (board[trow][tcol] == 'Q')
        {
            return false;
        }
        trow++;
        tcol--;
    }

    return true;
}

void helper(int n, vector<string> &board, int &allBoards, int col)
{

    if (col == n)
    {
        allBoards++;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (isValid(n, board, i, col))
        {
            board[i][col] = 'Q';
            helper(n, board, allBoards, col + 1);
            board[i][col] = '.';
        }
    }
}

int solve(int n)
{

    vector<string> board;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        s += ".";
    }
    for (int i = 0; i < n; i++)
    {
        board.push_back(s);
    }
    int allBoards = 0 ;
    helper(n, board, allBoards, 0);

    return allBoards;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout<<solve(n);

    return 0;
}