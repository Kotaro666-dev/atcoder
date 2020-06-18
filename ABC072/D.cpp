/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:12:03 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/18 10:37:03 by kkamashi         ###   ########.fr       */
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
    N++;

    // vector<int> p(N);
    ll num;
    vector<bool> index(N, true);
    ll issue = 0;
    for (int i = 1; i < N; i++)
    {
        cin >> num;
        if (num == i)
        {
            index[i] = false;
            issue++;
        }
    }

    // debug
    // for (int i = 1; i < N; i++)
    // {
    //     if (index[i] == true)
    //     {
    //         printf("X ");
    //     }
    //     else
    //     {
    //         printf("O ");
    //     }
    // }

    ll ans = 0;
    ll i = 1;
    while (issue > 0 || i < N - 1)
    {
        if (index[i] == false)
        {
            if (index[i + 1] == false)
            {
                issue -= 2;
                i += 2;
            }
            else
            {
                issue--;
                i++;
            }
            ans++;
        }
        else
        {
            i++;
        }
    }
    cout << ans << endl;

    return (0);
}