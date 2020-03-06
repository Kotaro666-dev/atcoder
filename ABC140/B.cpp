/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 08:46:39 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/06 09:02:52 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    // Input the data
    vector<int> order(N);
    for (int i = 0; i < N; i++)
    {
        cin >> order.at(i);
    }

    vector<int> points(N);
    for (int i = 0; i < N; i++)
    {
        cin >> points.at(i);
    }

    vector<int> bonus(N - 1);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> bonus.at(i);
    }

    // Calc for points
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += points.at(order.at(i) - 1);
    }

    // Calc for bonus
    for (int i = 0; i < N - 1; i++)
    {
        if (order.at(i) == order.at(i + 1) - 1)
        {
            sum += bonus.at(order.at(i) - 1);
        }
    }

    cout << sum << endl;
    return 0;
}
