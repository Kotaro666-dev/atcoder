/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:32:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/22 09:00:28 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 参考サイト：https://drken1215.hatenablog.com/entry/2020/06/21/224900

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

    map<int, int> A;
    for (int i = 1; i <= 1e5; i++)
    {
        A[i] = 0;
    }

    ll all = 0;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        A[num]++;
        all += num;
    }

    int Q;
    cin >> Q;

    int before, after;
    ll result = all;
    for (int i = 0; i < Q; i++)
    {
        cin >> before >> after;

        if (A.count(before))
        {
            A[after] += A[before];
            // result = result - (before * A[before]) + (after * A[before]);
            result += (after - before) * A[before];
            A[before] = 0;
        }
        printf("%lld\n", result);

        // debug
        // for (auto itr = A.begin(); itr != A.end(); itr++)
        // {
        //     cout << itr->first << " : " << itr->second << endl;
        // }
        // printf("\n");
    }
    return (0);
}