/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 14:01:27 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/28 14:26:21 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
高橋君はA枚、青木君はB枚のクッキーを持っています。
高橋君は以下の行動をK回繰り返します。

もし高橋君がクッキーを1枚以上持っているなら、高橋君のクッキーを1枚食べる。
そうでなく、もし青木君がクッキーを1枚以上持っているなら、青木君のクッキーを1枚食べる。
高橋君も青木君もクッキーを持っていないなら、何もしない。

高橋君と青木君が最終的に持っているクッキーの枚数をそれぞれ求めてください。
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int takahashi, aoki, repeat;
    long int rest_repeat;

    cin >> takahashi >> aoki >> repeat;

    /* After reading answer */
    if (repeat <= takahashi)
        cout << takahashi - repeat << " " << aoki << endl;
    else if (repeat <= takahashi + aoki)
        cout << 0 << " " << aoki - (repeat - takahashi) << endl;
    else
        cout << 0 << " " << 0 << endl;

    /* Second idea */
    // if (takahashi >= 1 && takahashi <= repeat)
    // {
    //     rest_repeat = repeat - takahashi;
    //     takahashi = 0;
    // }

    // if (aoki >= 1)
    // {
    //     if (aoki <= rest_repeat)
    //     {
    //         aoki = 0;
    //     }
    //     else
    //     {
    //         aoki -= rest_repeat;
    //     }
    // }

    /* First idea */
    // long int i;
    // for (i = 0; i < repeat; i++)
    // {
    //     if (takahashi >= 1)
    //         takahashi -= 1;
    //     else if (takahashi == 0)
    //         break;
    //     // else if (aoki >= 1)
    //     //     aoki -= 1;
    //     // else
    //     //     continue;
    // }

    // for (; i < repeat; i++)
    // {
    //     if (aoki >= 1)
    //         aoki -= 1;
    //     else if (aoki == 0)
    //         break;
    // }

    // cout << takahashi << " " << aoki << endl;
}