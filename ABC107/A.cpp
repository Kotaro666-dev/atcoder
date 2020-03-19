/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 14:57:48 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/19 15:02:33 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, x;
    cin >> N >> x;

    int ans;
    if (N == 1)
    {
        ans = 1;
    }
    else if (N == 2)
    {
        if (x == 1)
            ans = 2;
        else
            ans = 1;
    }
    else
    {
        ans = N - x + 1;
    }
    cout << ans << endl;
    return (0);
}