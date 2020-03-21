/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 11:49:14 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/21 11:58:28 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int a, b;
    cin >> a >> b;

    vector<int> tower(1000, 0);
    tower[0] = 1;
    for (int i = 1; i < 1000; i++)
    {
        tower[i] = tower[i - 1] + (i + 1);
        // printf("%d ", tower[i]);
    }

    int diff = abs(a - b);
    int snow = tower[diff - 1] - b;
    cout << snow << endl;
    return (0);
}