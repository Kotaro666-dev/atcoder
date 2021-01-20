/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:05:56 by kkamashi          #+#    #+#             */
/*   Updated: 2021/01/14 21:23:13 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    vector<double>x(N);
    vector<double>y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }

    int ans = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            double res = (y[j] - y[i]) / (x[j] - x[i]);
            if (-1.0 <= res && res <= 1.0)
            {
                // cout << fixed << setprecision(10) << res << endl;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return (0);
}