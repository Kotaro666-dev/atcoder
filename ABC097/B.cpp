/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:16:06 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/22 19:54:34 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
I cannot make this task AC.....
 */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int X;
    cin >> X;

    int ans = 1;
    int result;
    for (int i = 1; i < X; i++)
    {
        for (int j = 2; j <= X; j++)
        {
            result = j;
            for (int k = 0; k < 100; k++)
            {
                result *= j;
                if (result == i)
                {
                    ans = i;
                    break;
                }
                if (result > X)
                {
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return (0);
}