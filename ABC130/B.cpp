/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:28:56 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 18:47:25 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, X;
    cin >> N >> X;

    vector<int> L(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> L.at(i);
    }

    vector<int> D(N + 1, 0);
    for (int i = 1; i < N + 1; i++)
    {
        D.at(i) = D.at(i - 1) + L.at(i - 1);
        // cout << D.at(i) << endl;
    }

    int counter = 0;
    for (int i = 0; i < N + 1; i++)
    {
        if (D.at(i) <= X)
            counter++;
    }
    cout << counter << endl;
    return (0);
}