/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 11:31:47 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/23 11:48:19 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, X;
    cin >> N >> X;

    vector<int> m(N);
    int set_cost = 0;
    int minimum_cost = X;
    for (int i = 0; i < N; i++)
    {
        cin >> m[i];
        set_cost += m[i];
        minimum_cost = min(minimum_cost, m[i]);
    }
    // printf("set_cost = %d\n", set_cost);
    // printf("minimum_cost = %d\n", minimum_cost);

    int ans = 0;
    X -= set_cost;
    ans = N;
    ans += (X / minimum_cost);
    cout << ans << endl;
    return (0);
}