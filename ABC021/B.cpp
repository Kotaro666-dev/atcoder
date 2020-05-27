/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 17:00:30 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/27 17:11:21 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    int a, b;
    cin >> a >> b;

    int K;
    cin >> K;

    vector<int> P(K);
    for (int i = 0; i < K; i++)
    {
        cin >> P[i];
    }

    bool possible = true;
    for (int i = 0; i < K; i++)
    {
        if (P[i] == a || P[i] == b)
        {
            possible = false;
            break;
        }
    }

    for (int i = 0; i < K - 1; i++)
    {
        for (int j = i + 1; j < K; j++)
        {
            if (P[i] == P[j])
            {
                possible = false;
                break;
            }
        }
        if (possible == false)
        {
            break;
        }
    }

    string ans;
    if (possible == true)
    {
        ans = "YES";
    }
    else
    {
        ans = "NO";
    }
    cout << ans << endl;

    return (0);
}