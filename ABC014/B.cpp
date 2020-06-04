/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 10:50:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/04 10:24:10 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#include <bitset>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// 参考サイト：https://stackoverflow.com/questions/2686542/converting-integer-to-a-bit-representation
// vector<int> convert(int x)
// {
//     vector<int> ret;
//     while (x)
//     {
//         if (x & 1)
//             ret.push_back(1);
//         else
//             ret.push_back(0);
//         x >>= 1;
//     }
//     reverse(ret.begin(), ret.end());
//     return ret;
// }

int main(void)
{
    int n, X;
    cin >> n >> X;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // vector<int> bts = convert(X);

    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        // if (bts[i] == 1)
        // {
        //     ans += a[i];
        // }
        if (X >> i & 1)
        {
            ans += a[i];
        }
    }
    cout << ans << endl;
    return (0);
}
