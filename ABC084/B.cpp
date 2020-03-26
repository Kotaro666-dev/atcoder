/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 13:39:59 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/26 13:46:23 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    bool isPost = true;
    for (int i = 0; i < S.size(); i++)
    {
        if (i == A)
        {
            if (S[i] != '-')
            {
                isPost = false;
            }
        }
        else
        {
            if (!(S[i] >= '0' && S[i] <= '9'))
            {
                isPost = false;
            }
        }
    }

    if (isPost == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return (0);
}