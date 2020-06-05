/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   E.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 12:21:21 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/05 14:38:34 by kkamashi         ###   ########.fr       */
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
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> v(M);
    vector<int> u(M);
    for (int i = 0; i < M; i++)
    {
        cin >> v[i] >> u[i];
    }

    vector<int> c(N);
    for (int i = 0; i < N; i++)
    {
        cin >> c[i];
    }

    int s, x, y;
    for (int i = 0; i < Q; i++)
    {
        cin >> s;
        if (s == 1)
        {
            cin >> x;
        }
        else
        {
            cin >> x >> y;
        }
    }

    return (0);
}