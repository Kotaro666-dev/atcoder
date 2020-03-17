/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:06:19 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/17 11:22:09 by kotaro666        ###   ########.fr       */
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

    int favorite = 753;
    int min = 753;
    int first = 0, second = 0, third = 0, num = 0;
    for (int i = 0; i < S.size() - 2; i++)
    {
        first = (S[i] - '0') * 100;
        second = (S[i + 1] - '0') * 10;
        third = S[i + 2] - '0';
        num = first + second + third;
        // cout << num << endl;

        if (min > abs(favorite - num))
        {
            min = abs(favorite - num);
            // cout << num << endl;
        }
    }
    cout << min << endl;
    return (0);
}