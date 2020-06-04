/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_abc.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 11:31:28 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/04 11:34:00 by kkamashi         ###   ########.fr       */
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
    string S;
    cin >> S;

    int ans = 0;
    for (int i = 0; i < N - 2; i++)
    {
        if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
        {
            ans++;
            i += 2;
        }
    }

    cout << ans << endl;
    return (0);
}