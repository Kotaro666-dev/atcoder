/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 10:57:32 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/17 11:03:51 by kotaro666        ###   ########.fr       */
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

    vector<int> item(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> item[i];
    }

    sort(item.begin(), item.end(), greater<int>());
    int sum = 0;
    sum += (item[0] / 2);
    for (int i = 1; i < N; i++)
    {
        sum += item[i];
    }
    cout << sum << endl;

    return (0);
}