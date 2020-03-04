/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 18:53:03 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/04 19:02:22 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    if (N % 2 != 0)
    {
        cout << "No" << endl;
        return 0;
    }

    vector<char> temp(N / 2);
    vector<char> remain(N / 2);
    int i, j;
    for (i = 0, j = 0; i < N / 2; i++, j++)
    {
        temp.at(j) = S.at(i);
    }
    for (j = 0; i < N; i++, j++)
    {
        remain.at(j) = S.at(i);
    }

    if (temp == remain)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
