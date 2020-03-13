/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 21:09:47 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/13 21:49:29 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ABC 丼： 調理時間 A 分
ARC カレー： 調理時間 B 分
AGC パスタ： 調理時間 C 分
APC ラーメン： 調理時間 D 分
ATC ハンバーグ： 調理時間 E 分
 */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    vector<int> dishes(5, 0);
    for (int i = 0; i < 5; i++)
    {
        cin >> dishes.at(i);
    }

    vector<int> time(5, 0);
    for (int i = 0; i < 5; i++)
    {
        if (dishes.at(i) >= 10 && dishes.at(i) < 100)
        {
            time.at(i) = dishes.at(i) % 10;
        }
        else if (dishes.at(i) >= 100)
        {
            time.at(i) = dishes.at(i) % 10;
        }
        else
        {
            time.at(i) = dishes.at(i);
        }
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << time.at(i) << endl;
    // }

    int min = time.at(0) != 0 ? time.at(0) : 1;
    int location = 0;
    for (int i = 0; i < 5; i++)
    {
        if (min >= time.at(i) && time.at(i) != 0)
        {
            min = time.at(i);
            location = i;
        }
    }

    int sum = 0;
    int temp;
    for (int i = 0; i < 5; i++)
    {
        if (i != location)
        {
            sum += dishes.at(i);
        }
        if (sum % 10 != 0)
        {
            temp = sum % 10;
            sum += (10 - temp);
        }
    }
    sum += dishes.at(location);
    cout << sum << endl;
    return (0);
}