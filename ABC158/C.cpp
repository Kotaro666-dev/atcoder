/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:54:46 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/07 22:07:49 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B;
    cin >> A >> B;

    vector<int> price_a;
    vector<int> price_b;

    int maximum;
    int i;
    if (A >= B)
    {
        maximum = A * 100;
        i = A;
    }
    else
    {
        maximum = B * 100;
        i = B;
    }

    // cout << maximum << endl;
    // cout << i << endl;

    double temp_A, temp_B;
    for (; i < maximum; i++)
    {
        temp_A = i * 0.08;
        temp_B = i * 0.1;
        if (A == (int)temp_A)
        {
            // printf("A's i = %d\n", i);
            price_a.push_back(i);
        }
        if (B == (int)temp_B)
        {
            // printf("B's i = %d\n", i);
            price_b.push_back(i);
        }
    }

    int ans = -1;
    for (int i = 0; i < price_a.size(); i++)
    {
        for (int j = 0; j < price_b.size(); j++)
        {
            if (price_a.at(i) == price_b.at(j))
            {
                ans = price_a.at(i);
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
