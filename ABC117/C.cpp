/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 11:04:21 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/11 11:38:13 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  REFERENCE: https://severrabaen.hatenablog.com/entry/2019/02/03/224150

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> X(M);
    for (int i = 0; i < M; i++)
    {
        cin >> X[i];
    }

    if (N >= M)
    {
        printf("0\n");
        return (0);
    }

    sort(X.begin(), X.end());

    vector<ll> diff;
    for (int i = 0; i < X.size() - 1; i++)
    {
        diff.push_back(X[i + 1] - X[i]);
        // printf("%d - %d\n", X[i + 1], X[i]);
    }
    sort(diff.begin(), diff.end(), greater<int>());
    // for (int i = 0; i < diff.size(); i++)
    // {
    //     printf("%d ", diff[i]);
    // }
    ll ans = X.back() - X[0];
    for (int i = 0; i < min((int)diff.size(), N - 1); i++)
    {
        ans -= diff[i];
    }
    cout << ans << endl;
    return (0);
}