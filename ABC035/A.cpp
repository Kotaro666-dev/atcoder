/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 16:28:17 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/20 16:35:19 by kkamashi         ###   ########.fr       */
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
    int W, H;
    cin >> W >> H;

    int sum1 = 7;
    string ans;
    if ((W + H) % sum1 == 0)
    {
        ans = "4:3";
    }
    else
    {
        ans = "16:9";
    }

    cout << ans << endl;
    return (0);
}