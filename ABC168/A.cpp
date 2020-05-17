/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:18:26 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/17 21:03:59 by kkamashi         ###   ########.fr       */
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
    string N;
    cin >> N;

    char temp = N[N.size() - 1];
    int one = temp - '0';
    string ans;
    if (one == 3)
    {
        ans = "bon";
    }
    else if (one == 0 || one == 1 || one == 6 || one == 8)
    {
        ans = "pon";
    }
    else
    {
        ans = "hon";
    }
    cout << ans << endl;
    return (0);
}