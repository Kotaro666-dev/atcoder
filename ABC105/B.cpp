/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:21:57 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/20 15:35:28 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;

    int cake = 4;
    int donut = 7;
    bool found = false;
    for (int i = 0; i <= (N / cake); i++)
    {
        for (int j = 0; j <= (N / donut); j++)
        {
            if ((cake * i + donut * j) == N)
            {
                // printf("cake = %d, donut = %d\n", i, j);
                found = true;
                break;
            }
        }
        if (found == true)
        {
            break;
        }
    }

    if (found == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return (0);
}