/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 08:10:03 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/06 08:41:43 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string sequence;
    cin >> sequence;

    bool flag_right = true, flag_left = true;
    for (int i = 0; i < sequence.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (sequence.at(i) == 'L')
            {
                flag_right = false;
                break;
            }
        }
        else
        {
            if (sequence.at(i) == 'R')
            {
                flag_left = false;
                break;
            }
        }
    }

    if (flag_right == true && flag_left == true)
        cout << "Yes" << endl;
    else if (flag_right == false || flag_left == false)
        cout << "No" << endl;
    return 0;
}
