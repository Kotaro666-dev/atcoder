/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 00:50:06 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/06 01:22:17 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int H, W;
    cin >> H >> W;

    vector<vector<char>> C(H, vector<char>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> C[i][j];
        }
    }

    int temp;
    int counter = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            temp = (int)(double((i + 1) / 2));
            printf("%c", C[temp][j]);
        }
        printf("\n");
        for (int k = 0; k < W; k++)
        {
            temp = (int)(double((i + 1) / 2));
            printf("%c", C[temp][k]);
        }
        printf("\n");
    }
    return (0);
}