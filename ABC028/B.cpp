/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 11:09:18 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/30 11:16:39 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    string S;
    cin >> S;

    vector<int> counter(6, 0);
    vector<char> alpha{
        'A',
        'B',
        'C',
        'D',
        'E',
        'F',
    };

    for (int i = 0; i < S.size(); i++)
    {
        for (int j = 0; j < alpha.size(); j++)
        {
            if (S[i] == alpha[j])
            {
                counter[j]++;
            }
        }
    }

    for (int i = 0; i < counter.size(); i++)
    {
        cout << counter[i];
        if (i != counter.size() - 1)
        {
            cout << " ";
        }
    }
    printf("\n");
    return (0);
}