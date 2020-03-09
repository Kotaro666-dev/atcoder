/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:57:28 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/09 15:11:46 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    vector<int> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p.at(i);
    }

    vector<int> cmp_p(N);
    cmp_p = p;

    sort(cmp_p.begin(), cmp_p.end());
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if (p.at(i) != cmp_p.at(i))
            counter++;
    }

    if (counter <= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
