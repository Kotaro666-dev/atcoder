/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 19:49:45 by kkamashi          #+#    #+#             */
/*   Updated: 2020/08/02 21:10:50 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    double D;
    cin >> N >> D;

    int cnt = 0;
    double X, Y;
    double sum;
    for (int i = 0; i < N; i++)
    {
        cin >> X >> Y;
        sum = sqrt(pow(X, 2) + pow(Y, 2));
        if (sum <= D)
        {
            // printf("ans : %lf %lf\n", X, Y);
            cnt++;
        }
    }
    cout << cnt << endl;
    return (0);
}