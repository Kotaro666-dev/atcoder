/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 09:48:03 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/01 09:57:51 by kkamashi         ###   ########.fr       */
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
    int price_children, price_adults, discounts, K;
    cin >> price_children >> price_adults >> discounts >> K;
    int children, adults;
    cin >> children >> adults;

    int all_members = children + adults;
    if (all_members >= K)
    {
        price_children -= discounts;
        price_adults -= discounts;
    }

    int sum = children * price_children + adults * price_adults;
    cout << sum << endl;
    return (0);
}