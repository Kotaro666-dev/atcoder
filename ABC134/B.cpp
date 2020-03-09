/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:13:10 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/09 15:25:50 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

// image
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14
// x x x i x x x o o o  i  o  o  o

int main()
{
    int N, D;
    cin >> N >> D;

    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum = sum + (2 * D);
        sum++;
        if (sum >= N)
        {
            cout << i << endl;
            break;
        }
    }

    return (0);
}