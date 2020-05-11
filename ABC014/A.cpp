/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 10:50:42 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/11 10:55:01 by kkamashi         ###   ########.fr       */
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
    int a, b;
    cin >> a >> b;

    int ans;
    int temp = b;
    if (a % b == 0)
    {
        ans = 0;
    }
    else
    {
        while (b <= a)
        {
            b += temp;
        }
        ans = b - a;
    }
    cout << ans << endl;
    return (0);
}