/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 11:22:57 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/23 11:29:25 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    vector<int> num(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    int K;
    cin >> K;

    sort(num.begin(), num.end(), greater<int>());
    for (int i = 0; i < K; i++)
    {
        num[0] *= 2;
    }
    int sum = num[0] + num[1] + num[2];
    cout << sum << endl;
    return (0);
}