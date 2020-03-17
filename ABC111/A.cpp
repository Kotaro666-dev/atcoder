/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 18:16:37 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/17 18:18:51 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    string n;
    cin >> n;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '9')
            n[i] = '1';
        else
            n[i] = '9';
    }
    cout << n << endl;

    return (0);
}