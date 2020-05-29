/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 19:31:06 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/29 19:40:36 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

double area(double radius)
{
    return (radius * radius * PI);
}

int main(void)
{
    std::cout << std::fixed << std::setprecision(10);

    int N;
    cin >> N;

    vector<double> radius(N);
    for (int i = 0; i < N; i++)
    {
        cin >> radius[i];
    }
    sort(radius.begin(), radius.end(), greater<int>());

    double ans = 0;
    for (int i = 0; i < N - 1; i += 2)
    {
        ans += area(radius[i]) - area(radius[i + 1]);
    }
    if (N % 2 != 0)
    {
        ans += area(radius[radius.size() - 1]);
    }
    cout << ans << endl;
    return (0);
}