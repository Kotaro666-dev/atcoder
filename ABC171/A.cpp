/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:32:53 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/21 21:01:32 by kkamashi         ###   ########.fr       */
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

    char a;
    cin >> a;

    char ans;

    if (a >= 'A' && a <= 'Z')
    {
        ans = 'A';
    }
    else
    {
        ans = 'a';
    }
    cout << ans << endl;
    return (0);
}