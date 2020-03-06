/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 18:04:21 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/06 18:05:57 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    string s;

    cin >> a;
    cin >> s;

    if (a >= 3200)
        cout << s << endl;
    else
        cout << "red" << endl;

    return 0;
}
