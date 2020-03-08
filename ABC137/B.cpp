/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 18:51:01 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/08 19:49:28 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int K, X;
    cin >> K >> X;

    int start_point = X - (K - 1);
    int end_point = X + K;
    for (; start_point < end_point; start_point++)
    {
        cout << start_point;
        if (start_point != end_point - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}
