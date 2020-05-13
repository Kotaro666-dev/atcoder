/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 20:26:50 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/13 20:33:18 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    int hour, min, sec;
    hour = N / 3600;
    N = N % 3600;
    min = N / 60;
    N = N % 60;
    sec = N;

    if (hour < 10)
    {
        printf("0%d:", hour);
    }
    else
    {
        printf("%d:", hour);
    }
    if (min < 10)
    {
        printf("0%d:", min);
    }
    else
    {
        printf("%d:", min);
    }
    if (sec < 10)
    {
        printf("0%d\n", sec);
    }
    else
    {
        printf("%d\n", sec);
    }

    // printf("%d:%d:%d\n", hour, min, sec);
    return (0);
}