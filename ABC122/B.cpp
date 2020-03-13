/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 07:17:20 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/14 07:26:29 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    string S;
    cin >> S;

    int counter = 0;
    int max = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S.at(i) == 'A' || S.at(i) == 'C' ||
            S.at(i) == 'G' || S.at(i) == 'T')
        {
            counter++;
        }
        else
        {
            counter = 0;
        }
        if (max < counter)
            max = counter;
    }
    cout << max << endl;

    return (0);
}