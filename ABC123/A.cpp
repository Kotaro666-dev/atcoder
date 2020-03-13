/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 21:09:42 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/13 21:18:53 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    vector<int> antena(5, 0);
    int distance;
    for (int i = 0; i < 5; i++)
    {
        cin >> antena.at(i);
    }
    cin >> distance;

    bool is_connected = true;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (abs(antena.at(i) - antena.at(j)) > distance)
            {
                is_connected = false;
            }
            if (is_connected == false)
            {
                break;
            }
        }
        if (is_connected == false)
        {
            break;
        }
    }

    if (is_connected == true)
    {
        cout << "Yay!" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }

    return (0);
}