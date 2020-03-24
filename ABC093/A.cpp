/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 13:02:51 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/24 13:44:07 by kotaro666        ###   ########.fr       */
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

    if (S[0] != S[1] && S[1] != S[2] && S[2] != S[0])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    // vector<char> S(3);
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> S[i];
    // }
    // sort(S.begin(), S.end());

    // if (S[0] == 'a' && S[1] == 'b' && S[2] == 'c')
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     cout << "No" << endl;
    // }

    return (0);
}