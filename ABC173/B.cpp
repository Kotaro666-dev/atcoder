/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 13:10:18 by kkamashi          #+#    #+#             */
/*   Updated: 2020/07/05 21:05:14 by kkamashi         ###   ########.fr       */
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

    int ac, wa, tle, re;
    ac = 0;
    wa = 0;
    tle = 0;
    re = 0;
    string S;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        if (S == "AC")
            ac++;
        else if (S == "WA")
            wa++;
        else if (S == "TLE")
            tle++;
        else
            re++;
    }

    printf("AC x %d\n", ac);
    printf("WA x %d\n", wa);
    printf("TLE x %d\n", tle);
    printf("RE x %d\n", re);
    return (0);
}