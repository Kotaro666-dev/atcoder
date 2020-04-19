/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 15:56:58 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/19 16:01:35 by kkamashi         ###   ########.fr       */
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
    int N, Q;
    cin >> N >> Q;

    vector<ll> A(N, 0);

    int left, right, T;
    for (int i = 0; i < Q; i++)
    {
        cin >> left >> right >> T;
        left--;
        right--;

        for (int i = 0; i < N; i++)
        {
            for (int j = left; j <= right; j++)
            {
                A[j] = T;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
    }

    return (0);
}