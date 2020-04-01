/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 10:45:28 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/01 11:00:23 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int H, W;
    cin >> H >> W;

    vector<vector<char>> pixel(H + 2, vector<char>(W + 2));
    for (int i = 0; i < H + 2; i++)
    {
        for (int j = 0; j < W + 2; j++)
        {
            pixel[i][j] = '#';
        }
    }

    for (int i = 1; i < H + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            cin >> pixel[i][j];
        }
    }

    for (int i = 0; i < H + 2; i++)
    {
        for (int j = 0; j < W + 2; j++)
        {
            printf("%c", pixel[i][j]);
        }
        printf("\n");
    }

    return (0);
}