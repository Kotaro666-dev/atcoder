/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:11:22 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/04 18:30:25 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    // Best Answer
    // for (int i = 0; i < S.size(); i++)
    // {
    //     S[i] = (S[i] - 'A' + N) % 26 + 'A';
    // }

    /*
    まずは、'A' = 0, 'B' = 1... 'Z' = 26 とするため、s[i] - 'A' を計算する。
    そして、n個ずらすために、+nをする。
    +nで、s[i] - 'A' + n が26を超えてしまってはダメなので、s[i] - 'A' + n を26で割る。
    そうすると、仮に s[i] - 'A' + n = 28 だとすると 2 となり、'A' = 0, 'B' = 1... 'Z' = 26 の状態ではきちんと'C'となる.
     */


    // Y = 89, N = 13, Y + N=> 102
    // 102 - 90 = 12
    // 'A' = 65, 'Z' = 90
    int ascii_num;
    for (int i = 0; i < S.length(); i++)
    {
        ascii_num = (int)S.at(i);
        // Y = 89, N = 13, Y + N=> 102
        // 102 - 90 = 12
        // 'A' = 65, 'Z' = 90
        if (ascii_num + N > 90)
        {
            S.at(i) = ((ascii_num + N) - 'Z') + 'A' - 1;

        }
        else
        {
            S.at(i) += N;
        }
    }

    cout << S << endl;
    return 0;
}
