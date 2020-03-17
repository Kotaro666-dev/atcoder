/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:20:53 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/17 15:36:39 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, T;
    cin >> N >> T;

    vector<int> cost(N, 0);
    vector<int> time(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> cost[i] >> time[i];
    }

    int min_cost = 1000;
    bool found = false;
    for (int i = 0; i < N; i++)
    {
        if (time[i] <= T)
        {
            /* WAだった箇所：min_cost > cost[i] */
            if (min_cost >= cost[i])
            {
                min_cost = cost[i];
                found = true;
            }
        }
    }
    if (found == true)
        cout << min_cost << endl;
    else
        cout << "TLE" << endl;

    return (0);
}