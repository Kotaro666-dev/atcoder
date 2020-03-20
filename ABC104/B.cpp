/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:36:15 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/20 15:54:03 by kotaro666        ###   ########.fr       */
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

    bool found = true;
    // vSの先頭の文字は大文字の A である。
    if (S[0] != 'A')
    {
        found = false;
    }

    // S の先頭から 3 文字目と末尾から 2 文字目の間（両端含む）
    //に大文字の C がちょうど 1 個含まれる。
    // ex. 0123456789 -> from 2 to 8

    int end = S.size() - 1;
    int counter = 0;
    int location;
    for (int i = 2; i < end; i++)
    {
        if (S[i] == 'C')
        {
            location = i;
            counter++;
        }
    }
    // printf("counter = %d\n", counter);
    if (counter != 1)
    {
        found = false;
    }

    // 以上の A, C を除くSのすべての文字は小文字である。
    for (int i = 1; i < S.size(); i++)
    {
        if (i != location)
        {
            if (!(S[i] >= 'a' && S[i] <= 'z'))
            {
                found = false;
            }
        }
    }

    if (found == true)
    {
        cout << "AC" << endl;
    }
    else
    {
        cout << "WA" << endl;
    }

    return (0);
}