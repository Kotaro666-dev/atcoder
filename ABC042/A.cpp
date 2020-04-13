/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 21:07:47 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/13 21:10:49 by kkamashi         ###   ########.fr       */
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
    vector<int> S(3);

    cin >> S[0] >> S[1] >> S[2];
    sort(S.begin(), S.end());

    string ans;
    if (S[0] == 5 && S[1] == 5 && S[2] == 7)
    {
        ans = "YES";
    }
    else
    {
        ans = "NO";
    }
    cout << ans << endl;
    return (0);
}