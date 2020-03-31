/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:11:38 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/31 12:05:00 by kotaro666        ###   ########.fr       */
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
    string S;
    cin >> S;

    int length = S.size() - 1;
    string left;
    string right;
    int ans = 1;
    while (length >= 2)
    {
        if (length % 2 != 0)
        {
            length -= 1;
            continue;
        }
        left = S.substr(0, length / 2);
        // cout << left << endl;
        right = S.substr(length / 2, length / 2);
        // cout << right << endl;

        bool isEqual = true;
        if (left != right)
        {
            isEqual = false;
        }

        if (isEqual == true)
        {
            ans = length;
            break;
        }
        length -= 1;
    }
    cout << ans << endl;
    return (0);
}

/* 
int main(void)
{
    string S;
    cin >> S;

    int length = S.size() - 1;
    // vector<char> left(length);
    // vector<char> right(length);
    string left;
    string right;
    int ans = 1;
    while (length >= 2)
    {
        if (length % 2 != 0)
        {
            length -= 1;
            continue;
        }
        // left
        // for (int i = 0; i < length / 2; i++)
        // {
        //     left[i] = S[i];
        // }
        left = S.substr(0, length / 2);
        cout << left << endl;

        // right
        // for (int i = length / 2; i < length; i++)
        // {
        //     right[i - length / 2] = S[i];
        // }
        right = S.substr(length / 2, length / 2);
        cout << right << endl;

        bool isEqual = true;
        // int j;
        // for (j = 0; j < length / 2; j++)
        // {
        //     // printf("%d %c %c\n", i, left[i], right[i]);
        //     if (left[j] != right[j])
        //     {
        //         isEqual = false;
        //         break;
        //     }
        // }
        if (left != right)
        {
            isEqual = false;
        }
        if (isEqual == true)
        {
            ans = length;
            break;
        }
        length -= 1;
    }
    cout << ans << endl;
    return (0);
}
*/