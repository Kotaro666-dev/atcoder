/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:55:57 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 12:25:37 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string S;
    cin >> S;

    bool isgood = true;
    for (int i = 0; i < 3; i++)
    {
        if (S.at(i) == S.at(i + 1))
            isgood = false;
    }
    if (isgood == true)
        cout << "Good" << endl;
    else
        cout << "Bad" << endl;
    return 0;
}
