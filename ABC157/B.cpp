/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:12:41 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/01 21:38:51 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> bingo(3, vector<int>(3));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> bingo.at(i).at(j);
        }
    }

    int N;
    cin >> N;
    vector<int> selection(N);
    for (int i = 0; i < N; i++)
    {
        cin >> selection.at(i);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (selection.at(i) == bingo.at(j).at(k))
                    bingo.at(j).at(k) = -1;
            }
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << bingo.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }

    if ((bingo.at(0).at(0) == -1 && bingo.at(0).at(1) == -1 && bingo.at(0).at(2) == -1) ||
        (bingo.at(1).at(0) == -1 && bingo.at(1).at(1) == -1 && bingo.at(1).at(2) == -1) ||
        (bingo.at(2).at(0) == -1 && bingo.at(2).at(1) == -1 && bingo.at(2).at(2) == -1) ||
        (bingo.at(0).at(0) == -1 && bingo.at(1).at(0) == -1 && bingo.at(2).at(0) == -1) ||
        (bingo.at(0).at(1) == -1 && bingo.at(1).at(1) == -1 && bingo.at(2).at(1) == -1) ||
        (bingo.at(0).at(2) == -1 && bingo.at(1).at(2) == -1 && bingo.at(2).at(2) == -1) ||
        (bingo.at(0).at(0) == -1 && bingo.at(1).at(1) == -1 && bingo.at(2).at(2) == -1) ||
        (bingo.at(0).at(2) == -1 && bingo.at(1).at(1) == -1 && bingo.at(2).at(0) == -1))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}