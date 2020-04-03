/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 11:06:16 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/03 11:18:23 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    string A, B;
    cin >> A >> B;

    int length_A = A.size();
    int length_B = B.size();

    string ans;
    if (length_A > length_B)
    {
        ans = "GREATER";
    }
    else if (length_A < length_B)
    {
        ans = "LESS";
    }
    else
    {
        for (int i = 0; i < length_A; i++)
        {
            if (A[i] > B[i])
            {
                ans = "GREATER";
                break;
            }
            else if (A[i] < B[i])
            {
                ans = "LESS";
                break;
            }
            else if (i == length_A - 1)
            {
                ans = "EQUAL";
                break;
            }
        }
    }

    cout << ans << endl;
    return (0);
}