/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 21:31:46 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/25 21:35:11 by kkamashi         ###   ########.fr       */
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
    std::cout << std::fixed << std::setprecision(2);
    float A, B, C, D;
    cin >> A >> B >> C >> D;

    string ans;
    if (B / A > D / C)
    {
        ans = "TAKAHASHI";
    }
    else if (B / A < D / C)
    {
        ans = "AOKI";
    }
    else
    {
        ans = "DRAW";
    }
    cout << ans << endl;
    return (0);
}