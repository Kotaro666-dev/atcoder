/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 13:46:49 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/16 13:58:24 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;

    vector<int> L(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }

    sort(L.begin(), L.end(), greater<int>());

    int biggest = L[0];
    int rest = 0;
    for (int i = 1; i < N; i++)
    {
        rest += L[i];
    }
    // printf("biggest = %d, rest = %d\n", biggest, rest);
    if (biggest < rest)
        cout
            << "Yes" << endl;
    else
        cout << "No" << endl;

    return (0);
}