/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:46:07 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 11:46:47 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    sort(S.begin(), S.end());
    if ((S.at(0) == S.at(1) && S.at(2) == S.at(3)) &&
        (S.at(1) != S.at(2)))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}