/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 09:37:11 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/25 09:47:05 by kkamashi         ###   ########.fr       */
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
    int N, K;
    cin >> N >> K;

    vector<int> person(N, 0);
    for (int i = 0; i < K; i++)
    {
        int d;
        cin >> d;
        for (int j = 0; j < d; j++)
        {
            int temp;
            cin >> temp;
            person[temp - 1]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (person[i] == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return (0);
}