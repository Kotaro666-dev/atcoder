#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
#define R 6
#define C 6

int min(int x, int y, int z);

int minCost(int cost[R][C], int m, int n)
{
    int i, j;

    // Instead of following line, we can use int tc[m+1][n+1] or
    // dynamically allocate memory to save space. The following line is
    // used to keep the program simple and make it working on all compilers.
    int tc[R][C];

    tc[0][0] = cost[0][0];

    /* Initialize first column of total cost(tc) array */
    for (i = 1; i <= m; i++)
        tc[i][0] = tc[i - 1][0] + cost[i][0];

    /* Initialize first row of tc array */
    for (j = 1; j <= n; j++)
        tc[0][j] = tc[0][j - 1] + cost[0][j];

    /* Construct rest of the tc array */
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            tc[i][j] = min(tc[i - 1][j - 1],
                           tc[i - 1][j],
                           tc[i][j - 1]) +
                       cost[i][j];

    return tc[m][n];
}

/* A utility function that returns minimum of 3 integers */
int min(int x, int y, int z)
{
    if (x < y)
        return (x < z) ? x : z;
    else
        return (y < z) ? y : z;
}

/* Driver program to test above functions */
int main()
{
    int cost[R][C] = {{0, 10, 0, 10, 0, 0},
                      {10, 0, 10, 0, 10, 0},
                      {0, 10, 0, 10, 0, 0},
                      {10, 0, 10, 0, 10, 0},
                      {0, 10, 0, 10, 0, 0}};
    printf("cost = %d ", minCost(cost, 5, 5));
    return 0;
}