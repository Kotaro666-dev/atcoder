/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:21:39 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/04 12:01:17 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A + B + C >= 22)
    {
        cout << "bust" << endl;
    }
    else
    {
        cout << "win" << endl;
    }
    return 0;
}
