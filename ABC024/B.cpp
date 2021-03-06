/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 09:24:48 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/28 10:17:00 by kkamashi         ###   ########.fr       */
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
    int N, T;
    cin >> N >> T;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int ans = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] + T < A[i + 1])
        {
            ans += T;
        }
        else
        {
            ans += (A[i + 1] - A[i]);
        }
    }
    ans += T;
    cout << ans << endl;
    return (0);
}