/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:15:19 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/08 15:15:03 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

//　全探索ver
int main(void)
{
    const int col = 3;
    const int row = 3;
    vector<vector<int>> box(col, vector<int>(row));
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> box[i][j];
        }
    }

    int b1, b2, b3;
    string ans = "No";
    for (int a1 = 0; a1 <= 100; a1++)
    {
        for (int a2 = 0; a2 <= 100; a2++)
        {
            for (int a3 = 0; a3 <= 100; a3++)
            {
                b1 = box[0][0] - a1;
                b2 = box[0][1] - a1;
                b3 = box[0][2] - a1;

                if ((box[0][0] - b1 == box[0][1] - b2 && box[0][1] - b2 == box[0][2] - b3) &&
                    (box[1][0] - b1 == box[1][1] - b2 && box[1][1] - b2 == box[1][2] - b3) &&
                    (box[2][0] - b1 == box[2][1] - b2 && box[2][1] - b2 == box[2][2] - b3))
                {
                    ans = "Yes";
                    cout << ans << endl;
                    return (0);
                }
            }
        }
    }
    cout << ans << endl;
}

// int main(void)
// {
//     const int col = 3;
//     const int row = 3;
//     int mn1 = INF;
//     int mn2 = INF;
//     int mn3 = INF;
//     vector<vector<int>> box(col, vector<int>(row));
//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             cin >> box[i][j];
//             if (i == 0)
//             {
//                 mn1 = min(mn1, box[i][j]);
//             }
//             if (i == 1)
//             {
//                 mn2 = min(mn2, box[i][j]);
//             }
//             if (i == 2)
//             {
//                 mn3 = min(mn3, box[i][j]);
//             }
//         }
//     }
//     // cij = ai + bj
//     // -> cij - ai = bj
//     // -> 各cijからaiを引いた数がすべて同じbjであれば成立する

//     // aiを可能性のある最小値0に設定して、各行が同じ値であればOK
//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             if (i == 0)
//             {
//                 box[i][j] -= mn1;
//             }
//             if (i == 1)
//             {
//                 box[i][j] -= mn2;
//             }
//             if (i == 2)
//             {
//                 box[i][j] -= mn3;
//             }
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = col - 1; j >= 1; j--)
//         {
//             if (box[j][i] != box[j - 1][i])
//             {
//                 cout << "No" << endl;
//                 return (0);
//             }
//         }
//     }
//     cout << "Yes" << endl;
//     return (0);
// }