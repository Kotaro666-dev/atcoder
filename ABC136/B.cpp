/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 18:51:25 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/08 20:08:58 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    int counter = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i < 10 && i / 10 == 0)
            counter++;
        else if ((i >= 100 && i <= 999) && i / 1000 == 0)
            counter++;
        else if ((i >= 10000 && i <= 99999) && i / 100000 == 0)
            counter++;
    }
    cout << counter << endl;
    return 0;
}
