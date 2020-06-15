/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:30:46 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/15 11:06:30 by kkamashi         ###   ########.fr       */
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
    std::cout << std::fixed << std::setprecision(10);
    ll W, H, x, y;
    cin >> W >> H >> x >> y;

    printf("%lf %d\n", (double)W * (double)H / 2, (x + x == W) && (y + y == H));
    return (0);
}

// int main(void)
// {
//     ll W, H, x, y;
//     cin >> W >> H >> x >> y;

//     ll ans;
//     ll total = 0;
//     if (x == y && W == H)
//     {
//         total = (W * H) / 2;
//     }
//     // xで分割するとき left or right
//     ll x_area = 0;
//     if (x < abs(W - x))
//     {
//         x_area = x * H;
//     }
//     else
//     {
//         x_area = abs(W - x) * H;
//     }
//     // yで分割するとき upper or lower
//     ll y_area = 0;
//     if (y < abs(H - y))
//     {
//         y_area = y * W;
//     }
//     else
//     {
//         y_area = abs(H - y) * W;
//     }

//     if (total == x_area || total == y_area || x_area == y_area)
//     {
//         printf("%lld.00000 1\n", max(total, max(x_area, y_area)));
//     }
//     else
//     {
//         printf("%lld.00000 0\n", max(total, max(x_area, y_area)));
//     }
//     return (0);
// }