/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 12:39:30 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/12 13:26:13 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

// YYMM
// YY -> 00 - 99
// MM -> 01 - 12

int main(void)
{
    int S;
    cin >> S;

    int left = S / 100;
    int right = S % 100;

    // YYMM & MMYY possible
    if (right >= 1 && right <= 12 && left >= 1 && left <= 12)
    {
        cout << "AMBIGUOUS" << endl;
    }
    // YYMM
    else if (right >= 1 && right <= 12)
    {
        cout << "YYMM" << endl;
    }
    // MMYY
    else if (left >= 1 && left <= 12)
    {
        cout << "MMYY" << endl;
    }
    else
    {
        cout << "NA" << endl;
    }
    return (0);
}