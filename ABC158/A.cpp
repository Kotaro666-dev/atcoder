/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:54:04 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/07 21:02:37 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string S;
    cin >> S;

    for (int i = 0; i < 2; i++)
    {
        if (S.at(i) != S.at(i + 1))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}