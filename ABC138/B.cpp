/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 18:06:50 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/06 18:20:25 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
逆数とは？
その数に掛け合わせると１になる数。例、３の逆数は１／３。 ｂ ／ ａ の逆数は ａ ／ ｂ 。
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    vector<int> seq(N);
    for (int i = 0; i < N; i++)
    {
        cin >> seq.at(i);
    }

    double sum = 0.0;
    for (int i = 0; i < N; i++)
    {
        // reciprocal
        double reciprocal = 1.0 / seq.at(i);
        sum += reciprocal;
    }
    cout << fixed << setprecision(15) << 1.0 / sum << endl;
    return 0;
}
