/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 16:20:18 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/19 21:10:50 by kkamashi         ###   ########.fr       */
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
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }

    int ans = N;
    for (int i = 0; i < M; i++)
    {
        if (ans - A[i] >= 0)
        {
            ans -= A[i];
        }
        else
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return (0);
}