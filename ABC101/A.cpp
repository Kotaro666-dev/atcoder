/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 10:53:57 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/21 10:55:57 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    string S;
    cin >> S;

    int plus = 0;
    for (int i = 0; i < 4; i++)
    {
        if (S[i] == '+')
            plus++;
    }
    int ans = plus - (4 - plus);
    cout << ans << endl;

    return (0);
}