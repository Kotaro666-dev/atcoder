/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:55:59 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 12:33:59 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
分かりやすい解説
http://soto-ohuton.hatenablog.com/entry/2019/06/22/224052

与えられたりんごの味について、
おいしくもまずくもないりんご(味=0)を食べるのが一番差が小さくなります。
どのりんごが一番味=0に近いかを検索してやればOKです。
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N, L;
    cin >> N >> L;
    N += 1;

    vector<int> taste(N);
    int full_taste = 0;
    for (int i = 1; i < N; i++)
    {
        taste.at(i) = L + i - 1;
        full_taste += taste.at(i);
    }

    vector<int> abs_diff(N, 0);
    vector<int> lack_taste(N, 0);
    int temp;
    for (int i = 1; i < N; i++)
    {
        temp = taste.at(i);
        taste.at(i) = 0;

        for (int j = 1; j < N; j++)
        {
            lack_taste.at(i) += taste.at(j);
        }
        abs_diff.at(i) = abs(full_taste - lack_taste.at(i));
        taste.at(i) = temp;
    }

    int minimum = abs_diff.at(1);
    int location = 1;
    for (int i = 2; i < N; i++)
    {
        if (abs_diff.at(i) < minimum)
        {
            minimum = abs_diff.at(i);
            location = i;
        }
    }
    // cout << location << endl;
    cout << lack_taste.at(location) << endl;

    return 0;
}