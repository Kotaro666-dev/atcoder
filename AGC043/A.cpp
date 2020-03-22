/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 20:54:21 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/21 22:58:12 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

/* A utility function that returns minimum of 3 integers */
int min(int x, int y, int z)
{
    if (x < y)
        return (x < z) ? x : z;
    else
        return (y < z) ? y : z;
}

int main(void)
{
    int H, W;
    cin >> H >> W;

    vector<vector<char>> map(W + 1, vector<char>(H + 1, 0));
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < H; j++)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < H; j++)
        {
            if (map[i][j] == '.')
                map[i][j] = 0;
            else
                map[i][j] = 10;
        }
    }
    printf("\n----TEST----\n");
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < H; j++)
        {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    vector<vector<int>> tc(W + 1, vector<int>(H + 1));
    tc[0][0] = map[0][0];

    for (int i = 1; i <= W; i++)
        tc[i][0] = tc[i - 1][0] + map[i][0];

    /* Initialize first row of tc array */
    for (int j = 1; j <= H; j++)
        tc[0][j] = tc[0][j - 1] + map[0][j];

    /* Construct rest of the tc array */
    for (int i = 1; i <= W; i++)
        for (int j = 1; j <= H; j++)
            tc[i][j] = min(tc[i - 1][j - 1],
                           tc[i - 1][j],
                           tc[i][j - 1]) +
                       map[i][j];
    printf("mincost = %d\n", tc[W - 1][H - 1]);
    // int ans = tc[W - 1][H - 1] / 10;
    // cout << ans << endl;
    return (0);
}
