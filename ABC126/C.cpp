/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 13:38:06 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/14 14:14:18 by kkamashi         ###   ########.fr       */
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
    int N, K;
    cin >> N >> K;

    double ans = 0;
    double rate = 1.0 / N;
    int cnt;
    int temp;
    for (int i = 1; i <= N; i++)
    {
        rate = 1.0 / N;
        cnt = 0;
        temp = i;
        while (temp < K)
        {
            temp *= 2;
            cnt++;
        }
        rate *= pow(0.50, cnt);
        ans += rate;
    }
    cout << ans << "\n";
    return (0);
}