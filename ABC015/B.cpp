/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:27:27 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/10 16:47:32 by kkamashi         ###   ########.fr       */
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

    double A;
    double sum = 0;
    int cnt = 0;
    int ans;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        if (A != 0)
        {
            sum += A;
            cnt++;
        }
    }
    ans = ceil(sum / cnt);
    cout << ans << endl;
    return (0);
}