/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 14:57:13 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/14 21:04:33 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int X, Y;
    cin >> X >> Y;

    for (int i = 0; i <= X; i++)
    {
        for (int j = 0; j <= Y; j++)
        {
            if (i + j == X)
            {
                if (2 * i + 4 * j == Y)
                {
                    printf("Yes\n");
                    return (0);
                }
            }
        }
    }
    printf("No\n");
    return (0);
}