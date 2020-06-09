/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 09:42:31 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/09 10:12:47 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// 少数での計算を考えていなかった。誤差がでる可能性があるため、僅かな少数（EPS）を足しておくと誤差に強くなる

int main(void)
{
    int x_start, y_start, x_goal, y_goal, mins, speed;
    cin >> x_start >> y_start >> x_goal >> y_goal >> mins >> speed;

    int women;
    cin >> women;

    vector<int> x(women);
    vector<int> y(women);
    for (int i = 0; i < women; i++)
    {
        cin >> x[i] >> y[i];
    }

    double total = mins * speed;
    double first, second;
    for (int i = 0; i < women; i++)
    {
        first = sqrt(pow(abs(x_start - x[i]), 2) + pow(abs(y_start - y[i]), 2));
        second = sqrt(pow(abs(x[i] - x_goal), 2) + pow(abs(y[i] - y_goal), 2));
        // printf("total = %lf, fisrt = %lf, second = %lf\n", total, first, second);
        if (first + second <= total + EPS)
        {
            // printf("%d\n", i + 1);
            cout << "YES" << endl;
            return (0);
        }
    }
    cout << "NO" << endl;
    return (0);
}