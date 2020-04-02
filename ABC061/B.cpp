/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 10:43:04 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/02 10:53:59 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> a(M);
    vector<int> b(M);

    for (int i = 0; i < M; i++)
    {
        cin >> a[i] >> b[i];
    }

    vector<int> checker(N, 0);
    for (int i = 0; i < M; i++)
    {
        checker[a[i] - 1]++;
        checker[b[i] - 1]++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << checker[i] << endl;
    }
    return (0);
}