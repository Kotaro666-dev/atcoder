/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 00:50:06 by kotaro666         #+#    #+#             */
/*   Updated: 2020/06/04 09:33:05 by kkamashi         ###   ########.fr       */
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

    vector<vector<char>> map(H, vector<char>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> map[i][j];
        }
    }

    // debug
    for (int i = 0; i < H; i++)
    {
        int counter = 0;
        while (counter < 2)
        {
            for (int j = 0; j < W; j++)
            {
                cout << map[i][j];
            }
            printf("\n");
            counter++;
        }
    }

    return (0);
}