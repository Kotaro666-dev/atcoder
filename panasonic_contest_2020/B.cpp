/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 20:49:51 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/14 22:25:51 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef unsigned long long ull;

int main(void)
{
    ull H, W;
    cin >> H >> W;

    ull ans = 1;
    ull sum = H * W;
    if (H == 1 || W == 1)
    {
        cout << ans << endl;
        return 0;
    }
    if (sum % 2 == 0)
    {
        ans = sum / 2;
    }
    else
    {
        ans = (sum / 2) + 1;
    }
    cout << ans << endl;
    return (0);
}