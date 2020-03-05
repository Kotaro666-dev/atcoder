/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:11:20 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/05 15:16:15 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    vector<int> taste(N);
    for (int i = 0; i < N; i++)
    {
        cin >> taste.at(i);
    }

    int energy = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            energy += (taste.at(i) * taste.at(j));
        }
    }
    cout << energy << endl;
    return 0;
}
