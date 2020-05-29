/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 19:18:21 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/29 19:29:25 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int A, B;

int output(string dir, int meter)
{
    string east = "East";
    string west = "West";

    int result = 0;
    if (meter < A)
    {
        if (dir == east)
        {
            result += A;
        }
        else
        {
            result -= A;
        }
    }
    else if (meter >= A && meter <= B)
    {
        if (dir == east)
        {
            result += meter;
        }
        else
        {
            result -= meter;
        }
    }
    else if (meter > B)
    {
        if (dir == east)
        {
            result += B;
        }
        else
        {
            result -= B;
        }
    }
    return result;
}

int main(void)
{
    int N;
    cin >> N;
    cin >> A >> B;

    int ans = 0;
    string dir;
    int meter;
    for (int i = 0; i < N; i++)
    {
        cin >> dir >> meter;
        ans += output(dir, meter);
    }

    if (ans == 0)
    {
        cout << ans << endl;
    }
    else if (ans > 0)
    {
        cout << "East"
             << " " << ans << endl;
    }
    else
    {
        cout << "West"
             << " " << ans * -1 << endl;
    }
    return (0);
}