/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:59:12 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/05 15:01:41 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B;
    cin >> A >> B;

    if (A > 9 || B > 9)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << A * B << endl;
    }

    return 0;
}
