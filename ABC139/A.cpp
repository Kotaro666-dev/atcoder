/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:27:20 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/06 13:29:32 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string S;
    string T;
    cin >> S >> T;

    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        if (S.at(i) == T.at(i))
            ans++;
    }
    cout << ans << endl;
    return 0;
}
