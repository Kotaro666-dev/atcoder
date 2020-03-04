/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:55:36 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/04 15:10:15 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string S;
    cin >> S;

    vector<string> week(7);
    week = {
        "SUN",
        "MON",
        "TUE",
        "WED",
        "THU",
        "FRI",
        "SAT",
    };

    int ans;
    for (int i = 0; i < 7; i++)
    {
        if (S == week.at(i))
        {
            ans = 7 - i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
