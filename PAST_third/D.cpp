/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 12:06:44 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/05 14:27:16 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    const int column = 5;
    const int row = 4 * N + 1;

    vector<vector<char>> map(column, vector<char>(row));
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> map[i][j];
        }
    }

    string ans = "";
    for (int i = 0; i < N; i++)
    {
        ans += "x";
    }

    int place = 0;
    while (N > 0)
    {
        for (int i = 0; i < column; i++)
        {
            string temp = "";
            for (int j = place; j < place + 4; j++)
            {
                temp += map[i][j];
            }

            // 1 or 4
            if (i == 0)
            {
                if (temp == "..#.")
                {
                    ans[place / 4] = '1';
                }
                else if (temp == ".#.#")
                {
                    ans[place / 4] = '4';
                }
            }
            else if (i == 1)
            {
                // 2 or 3
                if (temp == "...#")
                {
                    // go to i = 3;
                    int tmp = 3;
                    string two_three = "";
                    for (int k = place; k < place + 4; k++)
                    {
                        two_three += map[tmp][k];
                    }

                    if (two_three == ".#..")
                    {
                        ans[place / 4] = '2';
                    }
                    else if (two_three == "...#")
                    {
                        ans[place / 4] = '3';
                    }
                }
                // 5 or 6
                else if (temp == ".#..")
                {
                    // go to i = 3;
                    int tmp = 3;
                    string five_six = "";
                    for (int k = place; k < place + 4; k++)
                    {
                        five_six += map[tmp][k];
                    }

                    if (five_six == "...#")
                    {
                        ans[place / 4] = '5';
                    }
                    else if (five_six == ".#.#")
                    {
                        ans[place / 4] = '6';
                    }
                }
                // 8 or 9
                else if (temp == ".#.#")
                {
                    // go to i = 3;
                    int tmp = 3;
                    string eight_nine = "";
                    for (int k = place; k < place + 4; k++)
                    {
                        eight_nine += map[tmp][k];
                    }

                    if (eight_nine == ".#.#")
                    {
                        ans[place / 4] = '8';
                    }
                    else if (eight_nine == "...#")
                    {
                        // go to i = 4
                        int tmp = 4;
                        string nine = "";
                        for (int k = place; k < place + 4; k++)
                        {
                            nine += map[tmp][k];
                        }

                        if (nine == ".###")
                        {
                            ans[place / 4] = '9';
                        }
                    }
                }
            }
            // 0, 7
            else if (i == 2)
            {
                if (temp == ".#.#")
                {
                    ans[place / 4] = '0';
                }
                else if (temp == "...#")
                {
                    ans[place / 4] = '7';
                }
            }
        }
        N--;
        place += 4;
    }
    cout << ans << endl;
    return (0);
}