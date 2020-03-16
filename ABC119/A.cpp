/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 08:27:34 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/16 09:02:34 by kotaro666        ###   ########.fr       */
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

    /*
    文字列を辞書式順序で比較する機能は,
    現代の多くの言語に標準で実装されており、
    「自前」で実装する必要はありません。
     */
    if (S <= "2019/04/30")
        cout << "Heisei" << endl;
    else
        cout << "TBD" << endl;

    // int heisei = false;
    // if (S.at(5) - '0' == 0 && S.at(6) - '0' <= 4)
    //     heisei = true;

    // if (heisei == true)
    //     cout << "Heisei" << endl;
    // else
    //     cout << "TBD" << endl;

    return (0);
}