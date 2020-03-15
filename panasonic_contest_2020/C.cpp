/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 20:49:56 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/15 11:25:06 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
√ a + √ b < √ c (1) 
⇔ ( √ a + √ b) 2 < c (2) 
⇔ 2 √ ab < c − a − b (3) 
⇔ c − a − b > 0 ∧ 4ab < (c − a − b) 2
 */

#include <bits/stdc++.h>
#include <cmath>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll d = c - a - b;
    if (d > 0 && d * d > 4 * (a * b))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return (0);
}