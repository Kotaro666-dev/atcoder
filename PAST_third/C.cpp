/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 12:01:47 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/05 12:06:07 by kkamashi         ###   ########.fr       */
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
    int A, R, N;
    cin >> A >> R >> N;

    ll ans = A;
    for (int i = 1; i < N; i++)
    {
        ans *= R;
        if (ans > INF)
        {
            printf("large\n");
            return (0);
        }
    }
    cout << ans << endl;
    return (0);
}