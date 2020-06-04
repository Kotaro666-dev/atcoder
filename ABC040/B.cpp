/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 12:00:38 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/04 09:51:38 by kkamashi         ###   ########.fr       */
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
    int n;
    cin >> n;

    // int diff_square;
    // int diff_reqtangle;

    int max = sqrt(n);
    int diff;
    int min_diff = INF;
    for (int i = 1; i <= max; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i * j <= n)
            {
                diff = (n - (i * j)) + abs(i - j);
                if (diff < min_diff)
                {
                    min_diff = diff;
                    // printf("%d %d\n", i, j);
                }
            }
        }
    }
    int ans = min_diff;
    cout << ans << endl;
    return (0);
}