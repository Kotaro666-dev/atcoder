/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 12:19:55 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/12 12:23:24 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int A, B;
    cin >> A >> B;

    int price;
    if (A >= 13)
    {
        price = B;
    }
    else if (A >= 6 && A <= 12)
    {
        price = B / 2;
    }
    else
    {
        price = 0;
    }
    cout << price << endl;
    return (0);
}
