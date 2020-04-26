/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 20:58:16 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/26 21:12:17 by kkamashi         ###   ########.fr       */
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

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    // debug
    // for (int i = 0; i < N; i++)
    // {
    //     cout << S[i] << endl;
    // }
    sort(S.begin(), S.end());
    //  debug
    // for (int i = 0; i < N; i++)
    // {
    //     cout << S[i] << endl;
    // }
    S.erase(unique(S.begin(), S.end()), S.end());
    cout << S.size() << endl;
    return (0);
}