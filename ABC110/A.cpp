/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 20:18:19 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/18 20:23:04 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    vector<int> num(3, 0);
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    sort(num.begin(), num.end(), greater<int>());

    int ans = (num[0] * 10 + num[1]) + num[2];
    cout << ans << endl;

    return (0);
}