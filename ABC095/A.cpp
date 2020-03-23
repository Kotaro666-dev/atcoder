/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 11:31:43 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/23 11:33:33 by kotaro666        ###   ########.fr       */
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
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'o')
            counter++;
    }
    cout << 700 + (100 * counter) << endl;

    return (0);
}