/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:32:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/21 22:39:35 by kkamashi         ###   ########.fr       */
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

    map<int, int> A;
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

        if (A.count(before) && A.count(after))
        {
            A[after] += A[before];
            printf("%lld %lld\n", A[after], A[before]);
            // printf("after: %lld, before: %lld\n", A[after], A[before]);
            result = result - (before * A[before]) + (after * A[after]);
            // printf("result = %lld, before = %lld, after = %lld\n", result, before * A[before], after * A[after]);
            // 配列をupdate
            A[before] = 0;
        }
        else if (A.count(before) && !A.count(after))
        {
            A[after] += A[before];
            // printf("%lld %lld\n", A[after], A[before]);
            // printf("result = %lld, before = %lld, after = %lld\n", result, before * A[before], after * A[after]);
            result = result - (before * A[before]) + (after * A[after]);

            A[before] = 0;
        }
        else if (!A.count(before))
        {
            result = result;
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