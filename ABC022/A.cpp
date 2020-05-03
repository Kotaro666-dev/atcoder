/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:09:03 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/03 17:19:54 by kkamashi         ###   ########.fr       */
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
    int N, S, T;
    cin >> N >> S >> T;

    int W;
    cin >> W;

    vector<int> A(N - 1);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> A[i];
    }

    // debug
    // for (int i = 0; i < N - 1; i++)
    // {
    //     cout << A[i] << endl;
    // }

    int ans = 0;
    if (W >= S && W <= T)
    {
        ans++;
    }
    for (int i = 0; i < N - 1; i++)
    {
        W += A[i];
        if (W >= S && W <= T)
        {
            // printf("%d\n", W);
            ans++;
        }
    }

    cout << ans << endl;
    return (0);
}