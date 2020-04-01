/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 10:45:32 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/01 11:03:01 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

// Editorial

// ，グループに 1, 2, 3 と番号を振っておき，
// 各 1 ≤ x ≤ 12 ごとに x が属するグループの番号を記録しておけば，
// x, y が属するグループの番号を比較することで
// Yes / No は簡単に判定できます．

// int main(void)
// {
//     int a[] = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
//     // 配列の添字は 0 から始まるので，a [0] は 0 にしている．
//     int x, y;
//     cin >> x >> y;
//     cout << (a[x] == a[y] ? " Yes " : " No ") << endl;
//     return (0);
// }

int main(void)
{
    int x, y;
    cin >> x >> y;

    vector<int> A = {1, 3, 5, 7, 8, 10, 12};
    vector<int> B = {4, 6, 9, 11};

    int cntA = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == x || A[i] == y)
        {
            cntA++;
        }
    }

    int cntB = 0;
    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] == x || B[i] == y)
        {
            cntB++;
        }
    }

    if (cntA == 2 || cntB == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}