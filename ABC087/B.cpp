/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 12:37:11 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/26 12:46:28 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int counter = 0;
    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            for (int k = 0; k <= C; k++)
            {
                if (i * 500 + j * 100 + k * 50 == X)
                {
                    counter++;
                }
            }
        }
    }
    cout << counter << endl;
    return (0);
}