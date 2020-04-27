/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 22:19:42 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/27 22:22:23 by kkamashi         ###   ########.fr       */
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

    string ans;
    if (N <= 59)
    {
        ans = "Bad";
    }
    else if (N >= 60 && N <= 89)
    {
        ans = "Good";
    }
    else if (N >= 90 && N <= 99)
    {
        ans = "Great";
    }
    else
    {
        ans = "Perfect";
    }
    cout << ans << endl;
    return (0);
}