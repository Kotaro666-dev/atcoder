/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 12:19:56 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/12 12:31:14 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    ll r, D, x;
    cin >> r >> D >> x;

    ll weight = 0;
    ll temp = x;
    for (int i = 0; i < 10; i++)
    {
        weight = r * temp - D;
        cout << weight << endl;
        temp = weight;
    }

    return (0);
}