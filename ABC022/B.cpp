/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 17:00:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/27 17:26:59 by kkamashi         ###   ########.fr       */
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

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int ans = 0;
    sort(A.begin(), A.end());

    int record;
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            ans++;
        }
    }

    // TLE
    // bool found;
    // for (int i = 0; i < N; i++)
    // {
    //     found = false;
    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         if (A[i] == A[j] && found == false)
    //         {
    //             ans++;
    //             found = true;
    //         }
    //     }
    // }

    cout << ans << endl;
    return (0);
}