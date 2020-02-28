/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:33:53 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/27 11:01:59 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    //連想配列map関数を使う
    map<string, int> box;
    string str;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        // 「box.count()の戻り値 != 0:キーが存在する
        // 「box.count()の戻り値 == 0:キーが存在しない
        if (box.count(str) != 0)
        {
            box[str]++;
        }
        else
        {
            box[str] = 1;
        }
    }
}