/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:37:02 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/02 21:13:15 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int K;
    cin >> K;

    int A, B;
    cin >> A >> B;

    string ans;
    int temp;
    for (int i = 1;; i++)
    {
        temp = K * i;
        if (temp >= A && temp <= B)
        {
            ans = "OK";
            break;
        }
        else if (temp > B)
        {
            ans = "NG";
            break;
        }
    }

    cout << ans << endl;
    return (0);
}