/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:04:14 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/15 16:28:58 by kkamashi         ###   ########.fr       */
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

    vector<int> R(N);
    for (int i = 0; i < N; i++)
    {
        cin >> R[i];
    }
    sort(R.begin(), R.end());

    double ans = 0.0;
    for (int i = N - K; i < N; i++)
    {
        ans = (ans + R[i]) / 2.0;
    }
    cout << ans << endl;
    return (0);
}