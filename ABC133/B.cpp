/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:29:03 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 11:38:28 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// couldn't solve yet...

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N, D;
    cin >> N >> D;

    vector<vector<int>> X(N, vector<int>(D));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < D; j++)
        {
            cin >> X.at(i).at(j);
        }
    }

    int distance;
    int counter = 0;
    for (int i = 0; i < N - 1; i++)
    {
        distance = 0;
        for (int j = 0; j < D; j++)
        {
            if (i != N - 1)
            {
                distance += (X.at(i).at(j) - X.at(i + 1).at(j)) *
                            (X.at(i).at(j) - X.at(i + 1).at(j));
            }
            else
            {
                distance += (X.at(i).at(j) - X.at(i + 1).at(j)) *
                            (X.at(0).at(j) - X.at(0).at(j));
            }
        }
        cout << distance << endl;
        if (sqrt(distance) == (int)(sqrt(distance)))
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}