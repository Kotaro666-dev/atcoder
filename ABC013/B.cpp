/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 16:22:18 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/12 16:33:24 by kkamashi         ###   ########.fr       */
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

    int temp = a;
    int counterA, counterB;
    // ++
    counterA = 0;
    while (a != b)
    {
        if (a == 9)
        {
            a = 0;
        }
        else
        {
            a++;
        }
        counterA++;
    }
    // --
    a = temp;
    counterB = 0;
    while (a != b)
    {
        if (a == 0)
        {
            a = 9;
        }
        else
        {
            a--;
        }
        counterB++;
    }
    int ans = min(counterA, counterB);
    cout << ans << endl;
    return (0);
}