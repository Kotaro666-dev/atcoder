/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 15:49:23 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/16 15:52:59 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    vector<int> element(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> element[i];
    }
    sort(element.begin(), element.end());

    int area = (element[0] * element[1]) / 2;
    cout << area << endl;
    return (0);
}