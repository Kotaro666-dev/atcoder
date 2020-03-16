/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 15:49:27 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/16 16:10:29 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int s;
    cin >> s;

    vector<int> a(1000000);
    a[0] = s;
    for (int i = 1; i <= 1000000; i++)
    {
        if (a[i - 1] % 2 == 0)
        {
            a[i] = a[i - 1] / 2;
        }
        else
        {
            a[i] = 3 * a[i - 1] + 1;
        }
    }

    // for (int i = 0; i < 100; i++)
    // {
    //     cout << a[i] << " ";
    // }

    int i, j;
    bool found = false;
    int location = 0;
    for (i = 0; i < 1000000 - 1; i++)
    {
        for (j = i + 1; j < 1000000; j++)
        {
            if (a[i] == a[j])
                found = true;

            if (found == true)
            {
                location = j + 1;
                break;
            }
        }
        if (found == true)
        {
            break;
        }
    }
    cout << location << endl;
    return (0);
}