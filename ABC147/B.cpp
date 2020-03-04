/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:02:02 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/04 12:20:19 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//　回分とは？
/*
始めから読んだ場合と終わりから（通常と逆に）読んだ場合とで,
文字ないし音節の出現する順番が変わらず、
な言語としてある程度意味が通る文字列。
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string S;
    cin >> S;

    int counter = 0;
    int size = S.length();
    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        if (S.at(i) != S.at(j))
        {
            counter++;
            // cout << S.at(i) << " " << S.at(j) << endl;
        }
    }
    cout << counter << endl;
    return 0;
}
