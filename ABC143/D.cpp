/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 11:24:08 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/24 20:59:36 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://drken1215.hatenablog.com/entry/2019/10/20/032700
// 3つのうち、2つを固定して考える

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

    vector<int> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }
    sort(L.begin(), L.end());
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%d ", L[i]);
    // }

    ll ans = 0;
    // a と bを固定 -> c < a + b
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // c の動ける範囲の右端を求める
            int k = lower_bound(L.begin(), L.end(), L[i] + L[j]) - L.begin();

            // c の動ける範囲は、([j + 1], k)
            ans += max(k - (j + 1), 0);
        }
    }
    cout << ans << endl;
    return (0);
}