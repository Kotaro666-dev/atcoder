#include <bits/stdc++.h>
#define PI 3.1415926535897
#define MAX 10001
using namespace std;
typedef long long ll;

int isPrime(long n)
{
    long result;
    bool isPrime = true;

    for (long i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            result = i;
            break;
        }
    }

    if (isPrime == true)
    {
        result = 1;
    }
    return result;
}

int main(void)
{
    long result = isPrime(9);
    cout << result << endl;
    return 0;
}

/* 
int dp[150][150];

int minMoves(int n, int startRow, int startCol, int endRow, int endCol)
{

    dp[n][n] = {0};
    // Dynamic Programming solution
    int ans;

    if (startRow == endRow && startCol == endCol)
    {
        ans = 0;
    }
    else
    {
        if (dp[abs(startRow - endRow)][abs(startCol - endCol)] != 0)
        {
            return dp[abs(startRow - endRow)][abs(startCol - endCol)];
        }
        else
        {
            int x1, y1, x2, y2;

            if (startRow <= endRow)
            {
                if (startCol <= endCol)
                {
                    x1 = startRow + 2;
                    y1 = startCol + 1;
                    x2 = startRow + 1;
                    y2 = startCol + 2;
                }
                else
                {
                    x1 = startRow + 2;
                    y1 = startCol - 1;
                    x2 = startRow + 1;
                    y2 = startCol - 2;
                }
            }
            else
            {
                if (startCol <= endCol)
                {
                    x1 = startRow - 2;
                    y1 = startCol + 1;
                    x2 = startRow - 1;
                    y2 = startCol + 2;
                }
                else
                {
                    x1 = startRow - 2;
                    y1 = startCol - 1;
                    x2 = startRow - 1;
                    y2 = startCol - 2;
                }
            }

            dp[abs(startRow - endRow)][abs(startCol - endCol)] =
                min(minMoves(n, x1, y1, endRow, endCol), minMoves(n, x2, y2, endRow, endCol)) + 1;

            dp[abs(startCol - endCol)][abs(startRow - endRow)] = dp[abs(startRow - endRow)][abs(startCol - endCol)];
        }
    }
}
*/