/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 01:05:51 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/28 01:08:58 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    char s;
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        if (s == '1')
        {
            ans++;
        }
    }
    cout << ans << endl;

    return (0);
}